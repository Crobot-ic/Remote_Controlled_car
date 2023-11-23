#include "Relay_Motors.h"
#include "Ultrasonic_Sensor.h"
#include "Sensor.h"
#include "line_finder.h"
// Pin 4 7 8 12 reserver pour le realy
// Pin Sl Sa   for distance sensor.                     

void setup() {
  // put your setup code here, to run once:
  
  setup_Sensor();
   setup_Motors();
   lineSetup();

}


void loop() {

 

  //  int lecture;
  // lecture = read_Distance();
  if (detect()){
  if(  lineFinder1()){
     motorsForward();

  }
  else if( lineFinder2()) { 
    motorsRigth(); 
                                
  }   
  else if(lineFinder3()) {
    motorsLeft();
    
    // while(lineFinder3())Serial.println("test1");
  }else{
    stopMotors();
    }
  }else stopMotors(); 
    
  
}