/* Let's try to count the number of button presses.
   Hook up the button to pin 9 and ground.
   The LED is on pin 13
 
 */

long buttonCount = 0;
const int buttonPin = 9;
const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    buttonCount++;
    Serial.println(buttonCount);
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}

