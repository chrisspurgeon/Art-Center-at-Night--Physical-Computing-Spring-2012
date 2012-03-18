/* Let's try again to count the number of button presses.
 But this time, lets check to see if it's already 
 being pressed.
 
 (Note: This will work better, but STILL not perfect).
 
 */

long buttonCount = 0;
const int buttonPin = 9;
const int ledPin = 13;
boolean buttonAlreadyPressed = false;

void setup() {
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    if (buttonAlreadyPressed == false) {
      buttonAlreadyPressed = true;
      buttonCount++;
      Serial.print(buttonCount);
      Serial.print(" at ");
      Serial.println(millis());
      digitalWrite(ledPin, HIGH);
    }
  } else {
    buttonAlreadyPressed = false;
    digitalWrite(ledPin, LOW);
  }
}



