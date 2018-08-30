#ifndef CarController_h
#define CarController_h

#include "Arduino.h"

class CarController
{
  public:
    CarController(int servoPin);
    void turnLeft();
  private:
    int _pin;
};

#endif
