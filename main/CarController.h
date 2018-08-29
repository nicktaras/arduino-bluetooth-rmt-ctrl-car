#ifndef CarController_h
#define CarController_h

#include "Arduino.h"

class CarController
{
  public:
    CarController(int pin);
    void turnLeft();
  private:
    int _pin;
};

#endif
