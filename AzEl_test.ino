
#include <Servo.h>

Servo rotel;// create servo object to control a servo
Servo rotaz;
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  rotel.attach(8);  // attaches the servo on pin 9 to the servo object
  rotaz.attach(9);
}

void loop() {
rotaz.write(0);
rotel.write(pos);


}
