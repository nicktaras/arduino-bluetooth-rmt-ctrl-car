/*
  Morse.cpp - Library for flashing Morse code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/

#include "Arduino.h"
#include "CarController.h"

CarController::CarController(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void CarController::turnLeft()
{
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(250);  
}

