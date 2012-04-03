/* RF receive */

#include <VirtualWire.h>

byte message[VW_MAX_MESSAGE_LEN];
byte msgLength = VW_MAX_MESSAGE_LEN;

void setup()  {
  Serial.begin(9600);
  Serial.println("Ready");
  
  vw_setup(2000);
  vw_rx_start();
}

void loop() {
  if(vw_get_message(message, &msgLength)) {
    Serial.print("Got: ");
    for (int i = 0; i < msgLength; i++) {
      Serial.write(message[i]);
    }
    Serial.println();
  }
}


