#!/usr/bin/env python
# -*- coding: utf-8-*-
import rospy # ros系统依赖
# twist 为线速度，角速度一般由cmd_vel发布
# 查阅对应消息类型并修改
from geometry_msgs.msg import Twist, Point, Quaternion, PoseWithCovarianceStamped 
# 几何学消息类型

# 获取transformation从而获取实时坐标
import tf
# from tf_conversions import transformations
from math import pi

class Publishpoint():
	def __init__(self):
		# make the initialization
		# create one node with the name of "publish original point"
		rospy.init_node('pubish_original_point')
		# with the node shut down
		# soemtimes we have it shutdown while other times not, so why???
		# rospy.on_shutdown(self.shutdown)
		# with the publisher established an topic
		# we will publish the position message whose type is Point
		# 参数解析
		self.init_pose = rospy.Publisher('/initialpose', PoseWithCovarianceStamped, queue_size=5)
		
		# 创造坐标变换监听器
		self.tf_listener = tf.TransformListener()
		# 休息两秒完成缓冲区
		rospy.sleep(2)
		# 全程坐标系
		self.odom_frame = '/odom'
		try:
			self.tf_listener.waitForTransform('/map', '/base_link', rospy.Time(), rospy.Duration(1.0))
		except (tf.Exception, tf.ConnectivityException, tf.LookupException):
			rospy.loginfo("Something Wrong with the transformation")

		# define the corresponding parameters
		# updating frequency
		# rate = 1
		# r = rospy.Rate(rate)
		# since no paramters transmitted, the publishing funcion will be published here
	
	def publishing(self, x, y):
		initpose = PoseWithCovarianceStamped()
		initpose.header.frame_id = "map"
		initpose.header.stamp = rospy.get_rostime()
		initpose.pose.pose.position.x = x
		initpose.pose.pose.position.y = y
		initpose.pose.pose.position.z = 0.0
		
		# we can determine how many times message we want
		#count = 0
		while not rospy.is_shutdown():
			self.init_pose.publish(initpose)
			rospy.loginfo("Publishing...")	

	# get current position
	def get_pos(self):
		try:
			rospy.loginfo("getting the current location...")
			(trans, rot) = self.tf_listener.lookupTransform('/map', '/base_link', rospy.Time(0))
			rospy.loginfo("we get it!")
			# x = trans[0]
			# y = trans[1]
			# th = euler[2] / pi * 180
			# return (x, y, th)
			while not rospy.is_shutdown():
				rospy.loginfo([trans[0],trans[1]])
		except (tf.LookupException, tf.ConnectivityException, tf.ExtrapolationException):
			rospy.loginfo("tf Error")
			# return None
		# euler = transformations.euler_from_quaternion(rot)
		#print euler[2] / pi * 180
		
		
	
	# stop and close automatically when shutting down the node
	def shutdown(self):
		# Always stop the robot when shutting down the node.
		rospy.loginfo("Stopping the robot...")
		# how to shutdown if we want initial pose to send message?
		#self.init_pose.publish(Point())
		rospy.sleep(10)
			



# execute the class and publish the message through topic "init_pose"
if __name__ == '__main__':
	try:
		# create one class
		Test = Publishpoint()
		# we set the initial position values
		# 如何确定方差矩阵取值范围
		point = [1.2, 2.0]
		# we set this as the broadcasting times we want
		#nums = 10
		Test.get_pos()
		
		
	except:
		rospy.loginfo("Node terminated!!!")
