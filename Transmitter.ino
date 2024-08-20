#include <BluetoothSerial.h>

// Create a BluetoothSerial object
BluetoothSerial SerialBT;

// Potentiometer pins
const int potPinThumb = 34;  // Thumb
const int potPinIndex = 35;  // Index finger
const int potPinMiddle = 32; // Middle finger
const int potPinRing = 33;   // Ring finger
const int potPinPinky = 25;  // Pinky finger

void setup() {
  Serial.begin(115200);

  // Start Bluetooth and set device name
  SerialBT.begin("ControlGlove"); // Bluetooth device name
  Serial.println("Bluetooth started. Look for 'ControlGlove' to pair.");
}

void loop() {
  // Read data from potentiometers
  int thumbValue = analogRead(potPinThumb);
  int indexValue = analogRead(potPinIndex);
  int middleValue = analogRead(potPinMiddle);
  int ringValue = analogRead(potPinRing);
  int pinkyValue = analogRead(potPinPinky);

  // Prepare the data in JSON format
  String data = "{\"thumb\":" + String(thumbValue) + 
                ",\"index\":" + String(indexValue) + 
                ",\"middle\":" + String(middleValue) + 
                ",\"ring\":" + String(ringValue) + 
                ",\"pinky\":" + String(pinkyValue) + "}";

  // Send the data over Bluetooth
  SerialBT.println(data);

  Serial.println("Data sent: " + data);

  delay(1000); // Send data every second
}
