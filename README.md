[![Udacity - Robotics NanoDegree Program](https://s3-us-west-1.amazonaws.com/udacity-robotics/Extra+Images/RoboND_flag.png)](https://www.udacity.com/robotics)

# RoboND-Control_Rover
A C++ program designed to accept user inputs and issue commands to the rover inside a simulator over a TCP/IP socket. 

### Rover Simulator:
Before you compile and run this program, download the rover simulator for [Windows](https://s3-us-west-1.amazonaws.com/udacity-robotics/Term+2+Prep/RoverSim_Windows.zip) or [MacOS](https://s3-us-west-1.amazonaws.com/udacity-robotics/Term+2+Prep/RoverSim_MacOS.zip). Optionally you can download it for [Linux](https://s3-us-west-1.amazonaws.com/udacity-robotics/Term+2+Prep/RoverSim_Linux.zip), note that this version will only work with native Ubuntu!




#### Navigate to the src folder in your catkin workspace:
```sh
$ cd ~/catkin_ws/src   
```

#### Clone the package:
```sh
$ git clone https://github.com/udacity/simple_arm_C.git
```

#### Source your environment:
```sh
$ cd ~/catkin_ws
$ source devel/setup.bash
```

#### After sourcing your environment, build the packages:
```sh
$ catkin_make
```

#### Make sure to install the missing system dependencies:
```sh
$ rosdep install -i simple_arm
```

#### Once the `simple_arm` package has been built, you can launch the simulation environment using:
```sh
$ roslaunch simple_arm robot_spawn.launch
```

Now, you should be able to see each revolute joint rotating between -pi/2 to pi/2 over time!
