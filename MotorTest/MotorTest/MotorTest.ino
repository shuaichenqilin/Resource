#include <DFMobile.h>
DFMobile Robot (4,5,7,6);     // initiate the Motor pin

void setup () {
  Robot.Direction (LOW,HIGH);  // initiate the positive direction  
}

void loop () {
  Robot.Speed (255,255);      //Forward
  delay (1000);

  Robot.Speed (-255,-255);    //Back
  delay (2000);
}
