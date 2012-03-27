/* 
Let's read some analog values.
 */

int initialLight;

void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
  initialLight = analogRead(A0);
}

void loop() {
  Serial.println(analogRead(A0));
}


