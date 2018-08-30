/* 
*  
*  Arduino bluetooth remote control car project 
*  
*  Program author: Nick Taras
*  Email: nicktaras@hotmail.co.uk
*
*/

#include <Servo.h>
//#include "CarController.h";
Servo steeringServo;     // Create Servo instance

int servoPin = 10; // Use pin 10 for the Servo
int pos = 0;       // variable to store the servo position

int motorPin = 9; // Use pwm pin 9 for the Toy Motor

//CarController CarController(10);

void setup() { 
  Serial.begin(9600);
  Serial.write("Program Start");
  
  pinMode(motorPin, OUTPUT); 
}

void loop() {
  //  motorOnThenOff();
  // motorOnThenOffWithSpeed();
  // motorAcceleration();
  // CarController.turnLeft();
  steer();
}

void steer () {
  for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees   {                                  // in steps of 1 degree     myservo.write(pos);              // tell servo to go to position in variable 'pos'     delay(15);                       // waits 15ms for the servo to reach the position   }   for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees
  {                                
    steeringServo.write(pos);              // tell servo to go to position in variable ‘pos’
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}

//void motorOnThenOff(){
//  int onTime = 2500;  //the number of milliseconds for the motor to turn on for
//  int offTime = 1000; //the number of milliseconds for the motor to turn off for
//  digitalWrite(motorPin, HIGH); // turns the motor On
//  delay(onTime);                // waits for onTime milliseconds
//  digitalWrite(motorPin, LOW);  // turns the motor Off
//  delay(offTime);               // waits for offTime milliseconds
//}

//void motorOnThenOffWithSpeed(){
//  int onSpeed = 200;  // a number between 0 (stopped) and 255 (full speed)
//  int onTime = 2500;  //the number of milliseconds for the motor to turn on for
//  int offSpeed = 50;  // a number between 0 (stopped) and 255 (full speed)
//  int offTime = 1000; //the number of milliseconds for the motor to turn off for
//  analogWrite(motorPin, onSpeed);   // turns the motor On
//  delay(onTime);                    // waits for onTime milliseconds
//  analogWrite(motorPin, offSpeed);  // turns the motor Off
//  delay(offTime);                   // waits for offTime milliseconds
//}

//void motorAcceleration(){
//  int delayTime = 50; // milliseconds between each speed step  
//  //Accelerates the motor
//  for(int i = 0; i < 256; i++){ //goes through each speed from 0 to 255 analogWrite(motorPin, i);   //sets the new speed     delay(delayTime);           // waits for delayTime milliseconds   }      //Decelerates the motor   for(int i = 255; i >= 0; i--){ //goes through each speed from 255 to 0
//    analogWrite(motorPin, i);   //sets the new speed
//    delay(delayTime);           // waits for delayTime milliseconds
//  }
//}

