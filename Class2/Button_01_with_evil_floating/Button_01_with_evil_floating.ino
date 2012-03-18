/* This example will have a floating input, 
   which is a BAD thing. For this BAD demo 
   connect the button to pin 9 and +5V.
   
*/

int buttonState;


void setup() {
  // put your setup code here, to run once:
  pinMode(9, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  buttonState = digitalRead(9);
  if (buttonState) {
    digitalWrite(13, HIGH);
  } 
  else {
    digitalWrite(13, LOW);
  }
}

/* To correct the floating value, connect a 10K
   resistor between ground and the side of the 
   button closest to the analog input. The resistor
   will act as  pull-down, grabbing errant current
   and throwing it to ground.
*/

