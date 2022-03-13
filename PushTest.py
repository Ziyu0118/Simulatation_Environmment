#!/usr/bin/python

import rospy
from geometry_msgs.msg import Pose, Point, Quaternion, PoseWithCovarianceStamped
from gazebo_msgs.msg import ModelState
from gazebo_msgs.srv import *
from move_base_msgs.msg import MoveBaseAction, MoveBaseGoal
import actionlib
from actionlib_msgs.msg import *
import math
import tf

from math import pi

class PublishandGotoPoint():
	def __init__(self):
		# initialize
		rospy.init_node('pose_estimate_2d', anonymous=False)
		self.init_pose = rospy.Publisher('/initialpose',PoseWithCovarianceStamped,queue_size=10)
		
		rate = 1
		r = rospy.Rate(rate)
		# This part is to manipulate the robot to go to the desired position
		self.goal_sent = False
		rospy.loginfo("Publisher Completed!")
		# rospy.on_shutdown(self.shutdown)
		
		self.move_base = actionlib.SimpleActionClient("move_base",MoveBaseAction)
		rospy.loginfo("wait for the server to come up")
		# allow 5 seconds to wait
		self.move_base.wait_for_server(rospy.Duration(5))
		rospy.loginfo("Come up!")
		# get the transformer listener
		try:
			self.tf_listener = tf.TransformListener()
		# wait for 2 seconds to establish the buffer
			rospy.sleep(2)
			rospy.loginfo("Listener Completed!")
		except:
			rospy.loginfo("Listener Failed!")
		
		try:
			self.tf_listener.waitForTransform('/map', 'base_link', rospy.Time(), rospy.Duration(1.0))
			rospy.loginfo("waiting end!!!!")
		except (tf.LookupException, tf.ConnectivityException, tf.ExtrapolationException):
			rospy.loginfo("Something Wrong with the transformation")

	def publishing(self, x, y):
		initpose = PoseWithCovarianceStamped()
		initpose.header.frame_id = 'map'
		initpose.header.stamp = rospy.get_rostime()
		initpose.pose.pose.position.x = x
		initpose.pose.pose.position.y = y
		initpose.pose.pose.position.z = 0.0
		
		initpose.pose.pose.orientation.x = 0.0
		initpose.pose.pose.orientation.y = 0.0
		initpose.pose.pose.orientation.z = 0.0
		initpose.pose.pose.orientation.w = 1.0
		
		if not rospy.is_shutdown():
			self.init_pose.publish(initpose)
			# rospy.loginfo("Message Sent!")
	
	def getpos(self):
		try:
			(trans,rot) = self.tf_listener.lookupTransform('/map','base_link',rospy.Time(0))
		except (tf.LookupException, tf.ConnectivityException, tf.ExtrapolationException):
			rospy.loginfo("can get the location!")
			
		x = trans[0]
		y = trans[1]
		return (x,y)
	
	def goto(self, pos, quat):
		self.goal_sent = True
		goal = MoveBaseGoal()
		goal.target_pose.header.frame_id = 'map'
		goal.target_pose.header.stamp = rospy.Time.now()
		goal.target_pose.pose = Pose(Point(pos['x'],pos['y'],0.000), Quaternion(quat['r1'],quat['r2'],quat['r3'],quat['r4']))
		self.move_base.send_goal(goal)
		
		success = self.move_base.wait_for_result(rospy.Duration(60))
		result = False
		
		state = self.move_base.get_state()
		print("doing...")
		if success and state == GoalStatus.SUCCEEDED:
			result = True
		else:
			self.move_base.cancel_goal()
			
		self.goal_sent = False
		return result

	def get_tool(self):
		# change the pose of model
		pose_pub = rospy.Publisher('gazebo/set_model_state', ModelState, queue_size=10)
		# rospy.init_node('gazebo',anonymous=True)
		pose_msg = ModelState()
		# the tool to be picked up
		pose_msg.model_name = 'bookshelf'
		rate = rospy.Rate(30)
		# get the position of the turtlebot
		get_state_service = rospy.ServiceProxy('gazebo/get_model_state', GetModelState)
		model = GetModelStateRequest()
		model.model_name = 'mobile_base'
		objstate = get_state_service(model)
		state = (objstate.pose.position.x, objstate.pose.position.y, objstate.pose.position.z)
		while not rospy.is_shutdown():
			pose_msg.pose.position.x = state[0]
			pose_msg.pose.position.y = state[1]
			pose_msg.pose.position.z = +0.4
	
			pose_pub.publish(pose_msg)
			# print("message published!")
			rate.sleep()
	
	def shutdown(self):
		if self.goal_sent:
			self.move_base.cancel_goal()
		rospy.loginfo("Stopping the robot...")
		rospy.sleep(10)
		
if __name__ == '__main__':
	try:
		Test = PublishandGotoPoint()
		a = Test.getpos()
		print(a)
		# a = [1.52,1.17]
		Test.publishing(a[0],a[1])
		# point = [1.2,2.0]
		# point = list(a)
		# Test.publishing(point[0],point[1])
		# this part is to test gotopoint function
		position = {'x':-0.0, 'y':-0.0}
		# quaternion = {'r1':0.000, 'r2': 0.000, 'r3': 0.000, 'r4': 1.000}
		quaternion = {'r1':0.000, 'r2': 0.000, 'r3': 0.000, 'r4': 1.000}
		rospy.loginfo("Going to destination")
		success = Test.goto(position,quaternion)

		if success:
			rospy.loginfo("Arrived!!!")
			if position['x'] == -0.0 and position['y'] == -0.0:
				rospy.loginfo("get the picking point!!!")
				Test.get_tool()
		else:
			rospy.loginfo("Failed!!!")
			
		rospy.sleep(1)
		
	except rospy.ROSInterruptException:
		rospy.loginfo("Node Terminated!!!")
