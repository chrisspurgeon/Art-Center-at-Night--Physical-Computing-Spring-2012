/* Let's try again to count the number of button presses.
 But this time, lets check to see if it's already 
 being pressed. If it has, add a delay.
 
 (Note: This works good for on, maybe not for off).
 
 */

long buttonCount = 0;
const int buttonPin = 9;
const int ledPin = 13;
boolean buttonAlreadyPressed = false;
int buttonDelay = 100;

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
      Serial.println(buttonCount);
      digitalWrite(ledPin, HIGH);
      delay(buttonDelay);
    }
  } else {
    buttonAlreadyPressed = false;
    digitalWrite(ledPin, LOW);
  }
}



