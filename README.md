# Simulatation_Environmment
This is the simulation environment for master thesis

How to open the env model?
1. $ cd ~/catkin_ws(your workspace's name)
2. $ catkin_make
3. $ source devel/setup.bash(every time you open the model, you should execute the code at first)
4. roslaunch robot_room room.launch

How to draw the map currently?
1. roslaunch robot_room room.launch
2. roslaunch turtlebot_teleop keyboard_teleop.launch
3. roslaunch turtlebot_gazebo gmapping_demo.launch
4. roslaunch turtlebot_rviz_launchers view_navigation.launch

Note: After the map established in success, we will combine these launch files
