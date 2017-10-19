[![Udacity - Robotics NanoDegree Program](https://s3-us-west-1.amazonaws.com/udacity-robotics/Extra+Images/RoboND_flag.png)](https://www.udacity.com/robotics)

# RoboND-Control_Rover
A C++ program designed to accept user inputs and issue commands to the rover inside a simulator over a TCP/IP socket. 

### Rover Simulator:
Before you compile and run this program, download the rover simulator for [Windows](https://s3-us-west-1.amazonaws.com/udacity-robotics/Term+2+Prep/RoverSim_Windows.zip) or [MacOS](https://s3-us-west-1.amazonaws.com/udacity-robotics/Term+2+Prep/RoverSim_MacOS.zip). Optionally you can download it for [Linux](https://s3-us-west-1.amazonaws.com/udacity-robotics/Term+2+Prep/RoverSim_Linux.zip), note that this version will only work with native Ubuntu!

### Running the C++ Program
You should consider compiling and executing this program inside an Ubuntu virtual machine!
Before doing so, edit your VMWare or VMFusion network settings and make sure you are connected to the NAT network. 

#### Navigate to a working directory and clone the repository:
```sh
$ cd Desktop
$ git clone https://github.com/udacity/RoboND-Control_Rover.git
$ cd ~/Desktop/RoboND-Control_Rover
```

#### Now, compile the code:
```sh
$ g++ Main.cpp -o app
```

#### Before your run the program, take note of the IP address of your virtual machine:
```sh
$ ifconfig
```

#### Finally, run the program:
```sh
$  ./app
```

### Running the Rover Simulator
1. Leave your virtual machine and run the simulator inside Windows or MacOS.
2. Then, select your graphics settings and enter the IP address of your Ubuntu VM noted earlier!
3. Select the Autonomous mode designed to accept TCP Communication.

### Controlling the Rover 
Refer to this table and control your robot with keyboard commands through the Ubuntu terminal!

<center> 
  
| **Command**        | **Description**         
| -------------    |:-------------:|
|     `w`   |Forward |
|        `s` | Backward       |
|  `a`| Left     |
|  `d`| Right     |
|  `b`| Brake   |
|  `p`| Pickup Ball  |  

</center>









