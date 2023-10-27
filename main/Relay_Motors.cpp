
#include "Relay_Motors.h"



int relay_1 = 4;
int relay_2 = 7;
int relay_4 = 8;
int relay_3 = 12;


void setup_Motors() {
 

  pinMode(relay_1, OUTPUT);
  pinMode(relay_2, OUTPUT);
  pinMode(relay_3, OUTPUT);
  pinMode(relay_4, OUTPUT);

}


void stopMotors(){
  digitalWrite(relay_1, LOW);
  digitalWrite(relay_2, LOW);
  digitalWrite(relay_3, LOW);
  digitalWrite(relay_4, LOW);
}

void rightMotorForward(){
  digitalWrite(relay_1, HIGH);
  digitalWrite(relay_3, LOW); 
}

void rightMotorForward(int time){
  rightMotorForward();
  delay(time);
  stopMotors();
}


void leftMotorForward(){
  digitalWrite(relay_2, HIGH);
  digitalWrite(relay_4, LOW);
}

void leftMotorForward(int time){
  leftMotorForward();
  delay(time);
  stopMotors();
}

void rightMotorBackward(){
  digitalWrite(relay_1, LOW);
  digitalWrite(relay_3, HIGH);
}

void rightMotorBackward(int time){
  rightMotorBackward();
  delay(time);
  stopMotors();
}

void leftMotorBackward(){
  digitalWrite(relay_2, LOW);
  digitalWrite(relay_4, HIGH);
}

void leftMotorBackward(int time){
  leftMotorBackward();
  delay(time);
  stopMotors();
}

void motorsForward(){
  rightMotorForward();
  leftMotorForward();
}

void motorsForward(int time){
  motorsForward();
  delay(time);
  stopMotors();
}

void motorsBackward(){
  rightMotorBackward();
  leftMotorBackward();
}

void motorsBackward(int time){
  motorsBackward();
  delay(time);
  stopMotors();
}

void motorsRigth(){
  rightMotorBackward();
  leftMotorForward();
}

void motorsRigth(int time){
  motorsRigth();
  delay(time);
  stopMotors();
}

void motorsLeft(){
  leftMotorBackward();
  rightMotorForward();
}

void motorsLeft(int time){
  motorsLeft();
  delay(time);
  stopMotors();
}



