/* HelloButton */


int buttonState = 0;

void setup() {
  pinMode(9,INPUT);
  digitalWrite(9,HIGH);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(9);
  if (buttonState == LOW) {
    Serial.println("ON");
    digitalWrite(13,HIGH);
  } 
  else {
    Serial.println("OFF");
    digitalWrite(13,LOW);
  }
}

