#include "Relay_Motors.h"
#include "Ultrasonic_Sensor.h"

// Pin 4 7 8 12 reserver pour le realy
// Pin 9 10 pour ultrasonic sensor                         

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   setup_Motors();
}


void loop() {
  // stopMotors();
  // delay(1000);
  // motorsForward(500);
  // delay(500);
  // motorsRigth(500);
  // delay(500);
  // motorsLeft(500);
  // delay(500);
  // motorsBackward(500);
  // delay(500);
  int lecture;
  lecture = read_Distance();
  delay(1000);
}