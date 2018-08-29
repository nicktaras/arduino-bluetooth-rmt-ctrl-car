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
int servoPin = 10;  // Use pin 10 for the servo
int servoPos = 0;   // Current Rotation position
int servoMin = 0;   // Minimum Rotation position
int servoMax = 180; // Maximum Rotation position
int pos = 0;        // variable to store the servo position

CarController::CarController(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
  servo.attach(servoPin);
}

void CarController::turnLeft()
{
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(250);  
}

