# B20_Group09

# Object Distance Measurement System Using Arduino
## Introduction
Accurate distance measurement is crucial across various applications, from robotics and automation to everyday safety systems. Ultrasonic distance measurement stands out due to its affordability, simplicity, and effectiveness in non-contact measurement. This project focuses on developing an object distance measurement system using an ultrasonic sensor, a display unit, and an Arduino Nano. The system aims to provide real-time distance data with a user-friendly display, making it suitable for educational, industrial, and domestic applications.

## Proposed System
The proposed system comprises the HC-SR04 ultrasonic sensor, Arduino Nano, and a display module (LCD/OLED/Seven-Segment Display) to measure and display the distance of objects in real time.

## System Components
| Component  | Functionality |
| ------------- | ------------- |
| HC-SR04 Ultrasonic Sensor  | Measures the distance to an object by emitting ultrasonic waves and calculating the time delay of the echo.  |
| Arduino Nano  | Acts as the central processing unit to process sensor data and convert it into distance values.  |
| Display Module  | Shows the measured distance to the user  |
| Laser Dot Diode  | Projects a laser dot in the direction of the measurement to visually guide the user.  |
| Power Supply  | Provides power to the Arduino and components.  |

## Working Principle
•	The HC-SR04 ultrasonic sensor sends out an ultrasonic pulse.

•	The pulse bounces back upon hitting an obstacle.

•	The sensor calculates the time taken for the pulse to return.

•	The Arduino Nano processes the time delay and converts it into distance using the formula;

        Distance = (Time × Speed of Sound )/2
  
•	The calculated distance is displayed on the LCD/OLED screen.

## Circuit Diagram
![image](https://github.com/user-attachments/assets/520c726f-b4b4-4db2-8af0-17fa0da7c39e)

