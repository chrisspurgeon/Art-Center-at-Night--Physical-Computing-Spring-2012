/* This button example uses an internal
   pullup resistor so the button always
   has a determined state. Connect the 
   button to pin 9 and ground.
   
*/



int buttonState = 0;


void setup() {
  pinMode(9, INPUT);
  pinMode(13, OUTPUT);
  digitalWrite(9, HIGH);  // Using the internal pullup resistor!
}

void loop() {
  buttonState = digitalRead(9);
  if (buttonState == HIGH) { // Button is HIGH until pressed!
    digitalWrite(13, LOW);
  } 
  else {
    digitalWrite(13, HIGH);
  }
}

