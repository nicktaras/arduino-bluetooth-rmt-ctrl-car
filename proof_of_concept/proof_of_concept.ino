/* 
*  
*  Arduino bluetooth remote control car project 
*  
*  Program author: Nick Taras
*  Email: nicktaras@hotmail.co.uk
*  Project created for My nephews James, Tomas & Jacob.
*
*/

#include <Servo.h>

// Control Keys
char steerLeft = 'e';  // Key to steer left
char steerRight = 'r'; // Key to steer right
char accelerate = 'a'; // Key to accelerate
char brake = 's';      // Key to brake

// Servo instance
Servo steeringServo;     

// Pins
int motorPin = 9;  // Use pin 9 for the Toy Motor
int servoPin = 10; // Use pin 10 for the Servo
int servoPos = 0;       // variable to store the servo position

// initialisation of program
void setup() { 
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT); 
  steeringServo.attach(servoPin);   // attach pin to servo
  steeringServo.write(45);           // reset servo
}

void cruiseControl() {
  if (Serial.available()) {  // Returns true if there is serial input.
    char ch = Serial.read();
    if (ch == accelerate) {
      Serial.write("Accelerate");
      digitalWrite(motorPin, HIGH); // turns the motor On
    }
    if (ch == brake) {
      Serial.write("Brake");
      digitalWrite(motorPin, LOW);  // turns the motor Off
    }
  }
}

void steerControl() {
  if (Serial.available()) {  // Returns true if there is serial input.
    char ch = Serial.read();
    if (ch == steerLeft) {
      if (servoPos < 180) {
        servoPos += 20;
        Serial.write("steer left");
      } 
    }
    if (ch == steerRight) {
      if (servoPos > 0) {
        servoPos -= 20;
        Serial.write("steer right");
      } 
    }
    steeringServo.write(servoPos);
  }
}

void loop() {
  cruiseControl();
  steerControl();
}

