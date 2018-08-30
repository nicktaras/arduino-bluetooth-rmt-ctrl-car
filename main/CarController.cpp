/* 
*  
*  Arduino bluetooth remote control car project 
*  
*  Program author: Nick Taras
*  Email: nicktaras@hotmail.co.uk
*
*/

#include "Arduino.h"
#include "CarController.h"
#include <Servo.h>

Servo servo;        // Create servo instance
int servoPos = 0;   // Current Rotation position
int servoMin = 0;   // Minimum Rotation position
int servoMax = 180; // Maximum Rotation position

CarController::CarController(int servoPin)
{
  pinMode(servoPin, OUTPUT);
  int _servoPin = servoPin;
  servo.attach(servoPin);
}

void CarController::turnLeft()
{
//  Serial.write("Program Turn Left");
//  for(servoPos = 0; servoPos < 180; servoPos += 1)
//  {                                
//    servo.write(servoPos); 
//    delay(15); 
//  }
  servo.write(40);
}

