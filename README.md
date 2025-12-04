# Robot Cleaner

Robot Cleaner is an autonomous robotic system designed to clean floors efficiently. It can detect obstacles and navigate around them while collecting dirt and debris. Unlike a traditional broom or brush, this robot moves independently using sensors and a control system. This project demonstrates real applications of robotics, sensors, and simple automation for everyday tasks.

# Features

Autonomous Navigation: Moves on its own and avoids obstacles using ultrasonic sensors

Efficient Cleaning: Detects and collects dirt with a rotating brush mechanism

Compact Design: Small, lightweight, and easy to use in tight spaces

Versatile Usage: Suitable for homes, classrooms, and small indoor areas

Simple Operation: Works with one button after powering on

# Setup, Usage, and Replication Instructions
## Setup Instructions
1. Required Components

Arduino Uno

Ultrasonic sensor (for obstacle detection)

DC motors with wheels

Motor driver (L298N)

Robot chassis

Cleaning brush motor

Two Li-ion batteries 3.7V (for powering motors and Arduino through regulator)

One 9V battery (for the sensor or control circuit)

DPST switch (for controlling power)

Wires

Wheels

2. Wiring
   
Connect the drive motors to the motor driver (L298N)

Connect the ultrasonic sensor to Arduino pins (trig/echo)

Connect the brush motor to the motor driver or separate control line

Connect two 3.7V Li-ion batteries to the power inputs

Connect 9V battery to Arduino or sensor supply if needed

Use the DPST switch to turn the entire system on/off

3. Software

Install the Arduino IDE

Install the required libraries

Upload the code to the Arduino board

## Usage

Place the Robot Cleaner on a flat surface

Turn on the DPST switch

The robot will start moving automatically, avoiding obstacles and cleaning the floor

Monitor battery level during operation to ensure safe use

## Replication

Anyone can recreate this project by assembling the components listed above, following the wiring instructions, and uploading the provided Arduino code. This process allows others to build a working Robot Cleaner with the same functionality.

# Project Purpose and Outcomes
## Purpose

To design and build an autonomous robot that cleans floors by detecting obstacles and collecting debris.

## Outcomes

The project successfully created a working Robot Cleaner prototype that can navigate, detect obstacles, and clean using a brush mechanism. Although it has limitations, it demonstrates strong understanding of robotics fundamentals and provides a solid base for future upgrades.
