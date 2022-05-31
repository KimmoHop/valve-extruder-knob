/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int minpos = 20;
int maxpos = 30;
int dir = minpos < maxpos ? 1 : -1;
int speed = 15;

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for (pos = maxpos; pos > minpos; pos -= dir) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(3*speed);                       // waits 15ms for the servo to reach the position
  }
  for (pos = minpos; pos < maxpos; pos += dir) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(3*speed);                       // waits 15ms for the servo to reach the position
  }
  for (pos = maxpos; pos > minpos; pos -= dir) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(2*speed);                       // waits 15ms for the servo to reach the position
  }
  for (pos = minpos; pos < maxpos; pos += dir) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(2*speed);                       // waits 15ms for the servo to reach the position
  }
  for (pos = maxpos; pos > minpos; pos -= dir) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(speed);                       // waits 15ms for the servo to reach the position
  }
  for (pos = minpos; pos < maxpos; pos += dir) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(speed);                       // waits 15ms for the servo to reach the position
  }
  
  delay(1000);
  
}
