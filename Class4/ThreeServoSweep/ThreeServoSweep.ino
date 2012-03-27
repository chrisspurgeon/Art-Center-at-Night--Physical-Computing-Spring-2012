// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.


#include <Servo.h> 
 
Servo myservo1;  
Servo myservo2;  
Servo myservo3;

int servo1Current = 2;
int servo2Current = 2;
int servo3Current = 2;

int servo1Change = 1;
int servo2Change = 1;
int servo3Change = 1;

int servo1Max = 88;
int servo2Max = 76;
int servo3Max = 43;

  
void setup() 
{ 
  myservo1.attach(8);  
  myservo2.attach(9);  
  myservo3.attach(10);  
} 
 
 
void loop() 
{ 
  servo1Current += servo1Change;
  servo2Current += servo2Change;
  servo3Current += servo3Change;
  
  myservo1.write(servo1Current);
  myservo2.write(servo2Current);
  myservo3.write(servo3Current);
  delay(15);
  
  if (servo1Current == 0 || servo1Current == servo1Max) {
    servo1Change = servo1Change * -1;
  }
  if (servo2Current == 0 || servo2Current == servo2Max) {
    servo2Change = servo2Change * -1;
  }
  if (servo3Current == 0 || servo3Current == servo3Max) {
    servo3Change = servo3Change * -1;
  }
  
  
} 
