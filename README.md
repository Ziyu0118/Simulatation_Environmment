
This is the simulation environment for master thesis

How to open the env model?

$ cd ~/catkin_ws(your workspace's name)
$ catkin_make
$ source devel/setup.bash(every time you open the model, you should execute the code at first)
roslaunch robot_room room.launch
How to draw the map currently?

roslaunch robot_room room.launch
roslaunch turtlebot_teleop keyboard_teleop.launch
roslaunch turtlebot_gazebo gmapping_demo.launch
roslaunch turtlebot_rviz_launchers view_navigation.launch
Note: After the map established in success, we will combine these launch files
