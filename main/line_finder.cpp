//------------------------------------------------------------
//Name: Line finder digital mode
//Function: detect black line or white line
//Parameter:   When digital signal is HIGH, black line
//             When digital signal is LOW, white line
//-------------------------------------------------------------

#include "line_finder.h"

int signalPin =  2;    // connected to digital pin 3
int signalPin2 = 3;
int signalPin3 =6;
void lineSetup()   {
  pinMode(signalPin, INPUT); // initialize the digital pin as an output:
  pinMode(signalPin2, INPUT);
  pinMode(signalPin3, INPUT);
}
// the loop() method runs over and over again,
// as long as the Arduino has power
int lineFinder1()
{
  delay(225);
  if(HIGH == digitalRead(signalPin)){
    Serial.println("milieu noir 1");
    return 1;}
  else  Serial.println("milieu blanc 1");

 
  return 0;
}

int lineFinder3()
{
  delay(225);
  if(HIGH == digitalRead(signalPin2)){
    Serial.println("gauche noir 2");
    return 1;}
  else Serial.println("gauche blanc 2");

 
  return 0;
}
int lineFinder2()
{
  delay(225);
 
  if(HIGH == digitalRead(signalPin3)){
    Serial.println("milieu noir3");return 1;}
  else Serial.println("milieu blanc3");

 
  return 0;
}

