#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

#define CE_PIN 9
#define CSN_PIN 10

RF24 radio(CE_PIN, CSN_PIN);
const byte address[6] = "00001";

void setup() {
  Serial.begin(9600);
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_LOW);
  radio.stopListening(); // Set as transmitter
}

void loop() {
  byte signal = 1; // Signal value (1 = ON, 0 = OFF)
  bool success = radio.write(&signal, sizeof(signal));
  if (success) {
    Serial.println("Signal Sent: 1");
  } else {
    Serial.println("Failed to send signal");
  }
  delay(1000); // Send every second
}
