# Autonomous-GPS-Navigation-Bot

This robot is built to move from its location to a desired location using a GPS sensor and a magnetometer.

~ QMC5883L.zip -> Library for using the QMC5883L magnetometer
#~ TinyGPSPlus-1.0.2.zip -> Library for using the neo-6M GPS sensor

~ QMCLibTest.ino -> Basic Arduino program to test the QMC5883L sensor
~ pidProject.ino -> Arduino program illustrating the PD controller in the robot
~ DriveBetterDriver.ino -> Arduino program to control the movement of the robot
~ ProjGPSCompNoNodeHardCodeMulti.ino -> Arduino program written for the robot to move from its location to destination over multiple waypoints that are stored in the Arduino board
~ FinalNode.ino (beta) -> Program written for the NodeMCU to periodically publish location of robot to cloud database and read destination coordinates sent by user from the database.
