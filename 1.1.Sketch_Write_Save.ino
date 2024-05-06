const int ledPin = 13;    // Connect LED to digital pin 13.

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);    // Set LED on.
  delay(2000);                   // Wait for 2 seconds.
  digitalWrite(ledPin, LOW);     // Set LED off.
  delay(2000);                   // Wait for 2 seconds.
}