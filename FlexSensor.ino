//include Servo library
#include <Servo.h>

//declare all variables
Servo thumb, index, middle, ring, pinky;
int thumbValue, indexValue, middleValue, ringValue, pinkyValue;
int thumbAngle, indexAngle, middleAngle, ringAngle, pinkyAngle;  

void setup() {
  //connect all servos
  thumb.attach(2,600,2400);
  index.attach(3,600,2400);
  middle.attach(4,600,2400);
  ring.attach(5,600,2400);
  pinky.attach(6,600,2400);
}

void loop() {
  //thumb
  thumbValue = analogRead(A0);
  thumbAngle = map(thumbValue, 120, 230, 0, 180);
  thumb.write(180 - thumbAngle);

  //index
  indexValue = analogRead(A1);
  indexAngle = map(indexValue, 185, 305, 0, 180);
  index.write(180 - indexAngle);

  //middle
  middleValue = analogRead(A2);
  middleAngle = map(middleValue, 110, 230, 0, 180);
  middle.write(middleAngle);

  //ring
  ringValue = analogRead(A3);
  ringAngle = map(ringValue, 110, 240, 0, 180);
  ring.write(ringAngle);

  //pinky
  pinkyValue = analogRead(A4);
  pinkyAngle = map(pinkyValue, 150, 220, 0, 180);
  pinky.write(pinkyAngle);
}
