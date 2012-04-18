/* Noisy data
Let's simulate noisy data.
LED in pin 3

*/



int R;

void setup() {
  pinMode(A0, INPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  R = random(1024);
  Serial.println(R);
  analogWrite(3, R);
  delay(20);
}


