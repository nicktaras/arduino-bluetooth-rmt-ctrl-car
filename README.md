# arduino-bluetooth-rmt-ctrl-car
C++ / Arduino bluetooth remote control car.

Project inspired by and made for my nephews.

### Project: 

This project can be used for hobbyists who would like a headstart with their remote control car project (software, hardware and electronics).

### Project Status: 

Please track through commits to see smaller steps of progress:

- Code (see proof of concept for working version)
- Electronics schema (ready for testing)
- 3D model (incomplete)

Good luck with your project :) 

### Code: 

## Main 
- Runs application life cycle loop
- Includes class to drive and steer car 
- Includes class to handle blue tooth communication

## Bluetooth (transmitter - via other device)
- Emits signal to steer left / right
- Emits signal to drive

## Bluetooth (reciever)
- Receives signal to steer left / right
- Receives signal to drive

## Car Controller 
- Listens to relevent Bluetooth signals received
- Steer left and right
- Drive forwards

## Circuit

- ![alt text](https://github.com/nicktaras/arduino-bluetooth-rmt-ctrl-car/blob/master/circuit_schema/arduino-bluetooth-rmt-ctrl-car-v0.1-beta_schem.png)
