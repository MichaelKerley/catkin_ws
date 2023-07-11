# catkin_ws (Drone BRANCH)

Please follow along carefully
If you do not do exactly as the instructions indicate then YOU WILL have issues
I have done lots of work getting everything into a nice easy to use git repo so in theory all the issues I ran into should be avoided


What you will need
 - Jetson Orin nano with jetpack 5.1.1
 - intel Realsense Camera
 - USB to FTDI cable
 - SIXFAB cellular device


0: install ros noetic
http://wiki.ros.org/noetic/Installation/Ubuntu

1: install jetson inference from source
https://github.com/dusty-nv/jetson-inference/blob/master/docs/building-repo-2.md

This allows from computer vision stuff


2: install zero tier
`curl -s https://install.zerotier.com | sudo bash`

`sudo zerotier-cli status`

`sudo systemctl enable zerotier-one`

`sudo zerotier-cli join 632ea290859bb47a`

This will allow us to ssh into the drone and control it from ground station

3: install six fab and attach to jetson

4: install librealsense from source
follow the instructions here...
https://github.com/IntelRealSense/librealsense/blob/master/doc/installation_jetson.md
USE THE BUILDING FROM SOURCE USING NATIVE BACKEND METHOD!!!!
DO NOT PATCH THE KERNEL!!!!
Test librealsense by doing `realsense-viewer`

5: install catkin tools
`sudo apt-get install python3-catkin-tools`


6: Clone the repo and build

`git clone https://github.com/MichaelKerley/catkin_ws.git` 

`cd catkin_ws`

`SWITCH TO THE drone branch!!!`

`git submodule update --init --recursive`

`sudo apt install ros-noetic-rgbd-launch`

`michael@ubuntu:~/catkin_ws$ catkin init`

`~/catkin_ws$ catkin clean`

`~/catkin_ws$ catkin build realsense2_camera realsense2_description -DCATKIN_ENABLE_TESTING=False -DCMAKE_BUILD_TYPE=Release`

`~/catkin_ws$ catkin realsense2_camera realsense2_description config --install`

7: test Realsense ros
`~/catkin_ws$ . /opt/ros/noetic/setup.bash`

`~/catkin_ws$ . ./devel/setup.bash` 

`~/catkin_ws$ roslaunch realsense2_camera demo_pointcloud.launch`



