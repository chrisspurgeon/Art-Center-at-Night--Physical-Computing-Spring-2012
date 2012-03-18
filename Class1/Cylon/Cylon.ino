/* Cylon */

// Make a set of four LEDs blink like a cylon.


int PinNum;
int DELAY = 200;
void setup() {
  for (PinNum = 10; PinNum <= 13; PinNum++) {
    pinMode(PinNum, OUTPUT);
  }
}
void loop() {
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  delay(DELAY);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  delay(DELAY);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  delay(DELAY);
  // back down
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
  delay(DELAY);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  delay(DELAY);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
  delay(DELAY);
}

