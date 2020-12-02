#include <Servo.h>

Servo myServo;// create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myServo.attach(8);  // attaches the servo on pin 9 to the servo object
}

void loop() {
myServo.write(pos);
}
