#media/materials/textures:/usr/share/gazebo-11/media:~/catkin_ws/models/baylands/media:~/.gazebo/models




##do not change what is below this works and its annoying to fix
#source /usr/share/gazebo/setup.bash
source /opt/ros/noetic/setup.bash
source ~/catkin_ws/devel/setup.bash
source ~/catkin_ws/src/PX4-Autopilot/Tools/setup_gazebo.bash ~/catkin_ws/src/PX4-Autopilot ~/catkin_ws/src/PX4-Autopilot/build/px4_sitl_default

export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:~/catkin_ws/src/PX4-Autopilot
export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:~/catkin_ws/src/PX4-Autopilot/Tools/sitl_gazebo

export GAZEBO_PLUGIN_PATH=$GAZEBO_PLUGIN_PATH:/usr/include/gazebo-11/gazebo/plugins
export GAZEBO_PLUGIN_PATH=$GAZEBO_PLUGIN_PATH:/usr/lib/x86_64-linux-gnu/gazebo-11/plugins

export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:~/.gazebo/models
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:~/catkin_ws/src/air_bulbasaur/models
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:~/catkin_ws/src/air_bulbasaur/worlds
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:~/catkin_ws/src/PX4-Autopilot/Tools/sitl_gazebo/models
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:~/catkin_ws/src/PX4-avoidance/avoidance/sim/models
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:~/catkin_ws/src/PX4-avoidance/avoidance/sim/worlds
export ROS_MASTER_URI=http://10.144.106.21:11311/
export ROS_IP=10.144.106.21

export GAZEBO_RESOURCE_PATH=$GAZEBO_RESOURCE_PATH:/usr/share/gazebo-11


#:~/catkin_ws/src/PX4-Avoidance/avoidance/sim/models:~/catkin_ws/src/PX4-Avoidance/avoidance/sim/worlds:~/.gazebo/models

export MY_WORKSPACE="/home/alibek/workspace"
export MY_CATKIN_WORKSPACE="/home/alibek/catkin_ws"
export RMD_TEST_DATA_PATH="/home/alibek/catkin_ws/src/rpg_open_remode/test_data"



# catkin_ws
Please follow all instructions carefully as any deviation may cause issues later

NOTE: Before cloning please make sure that you have catkin tools installed and are running Ubuntu 20.04


0:

Setup github ssh keys if you have not already done so


1:

code ~/.bashrc
Copy and paste the following at the end of your bashrc

source /opt/ros/noetic/setup.bash
source ~/catkin_ws/devel/setup.bash
source ~/catkin_ws/src/PX4-Autopilot/Tools/setup_gazebo.bash ~/catkin_ws/src/PX4-Autopilot ~/catkin_ws/src/PX4-Autopilot/build/px4_sitl_default
export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:~/catkin_ws/src/PX4-Autopilot
export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:~/catkin_ws/src/PX4-Autopilot/Tools/sitl_gazebo
export GAZEBO_PLUGIN_PATH=$GAZEBO_PLUGIN_PATH:/usr/include/gazebo-11/gazebo/plugins
export GAZEBO_PLUGIN_PATH=$GAZEBO_PLUGIN_PATH:/usr/lib/x86_64-linux-gnu/gazebo-11/plugins
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:~/.gazebo/models
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:~/catkin_ws/src/air_bulbasaur/models
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:~/catkin_ws/src/air_bulbasaur/worlds
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:~/catkin_ws/src/PX4-Autopilot/Tools/sitl_gazebo/models
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:~/catkin_ws/src/PX4-avoidance/avoidance/sim/models
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:~/catkin_ws/src/PX4-avoidance/avoidance/sim/worlds
export GAZEBO_RESOURCE_PATH=$GAZEBO_RESOURCE_PATH:/usr/share/gazebo-11


2:

Download and install QGC in whatever directory you desire


3:

cd home/username

(this is your base directory, IE home enviroment variable "~/")

git clone git@github.com:MichaelKerley/catkin_ws.git --recursive


4: 

you may need to do git submodule synch or git submodule update --init --recursive



5:

cd catkin_ws/src/PX4-Autopilot/

make px4_sitl gazebo
make px4_sitl_default gazebo

6:

cd .. 
cd ..
catkin build


7: 

roslaunch air_bulbasaur custom.launch

8:

Open up QGC and make sure 

COM_OBS_AVOID is turned on

9:

have fun!
