/* 
Let's read some analog values.
 */



void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(A0));
}


