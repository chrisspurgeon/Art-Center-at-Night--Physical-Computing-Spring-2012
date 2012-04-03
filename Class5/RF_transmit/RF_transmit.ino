/* Transmitter code */

#include <VirtualWire.h>

void setup() {
  vw_setup(2000);
}

void loop() {
  send("hello");
  delay(1000);
}

void send (char *message) {
  vw_send((uint8_t *)message, strlen(message));
  vw_wait_tx();
}




