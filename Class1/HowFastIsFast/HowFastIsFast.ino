/* HowFastIsFast */



long i = 0;
long theStartTime;


void setup() {
  Serial.begin(9600); 
  Serial.println("Hello world");
  Serial.print("Starting at ");
  theStartTime = millis();
  Serial.println(theStartTime);

}

void loop() {
  //  Serial.println(i);
  i = i + 1;

  if (i / 1000 == 0) {
    Serial.print(".");
  }
  if (i == 1000000) {
    Serial.print("Started at ");
    Serial.println(theStartTime);
    Serial.print("I'm done at ");
    Serial.println(millis());
    Serial.print("A million loops took ");
    Serial.print((millis() - theStartTime) / 1000.0);
    Serial.println(" seconds.");
    Serial.print("That's ");
    Serial.print(1000000 / ((millis() - theStartTime) / 1000));
    Serial.println(" loops a second.");
  
    while(1 == 1) {
      ;
    }
  }
}





