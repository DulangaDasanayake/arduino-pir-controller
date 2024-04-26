// Define the pin numbers for PIR sensor and LEDs
const int pirPin = 2;   // PIR sensor connected to digital pin 2
const int redLedPin = 3;  // Red LED connected to digital pin 3
const int greenLedPin = 4; // Green LED connected to digital pin 4

void setup() {
  // Initialize the digital pins
  pinMode(pirPin, INPUT);
  pinMode(redLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  
  // Initially turn off the red LED
  digitalWrite(redLedPin, LOW);
}

void loop() {
  // Read the state of the PIR sensor
  int pirState = digitalRead(pirPin);
  
  // Check if motion is detected
  if (pirState == HIGH) {
    // Turn on the red LED for a short duration
    digitalWrite(redLedPin, HIGH);
    delay(1000); // Adjust the duration as needed (in milliseconds)
    digitalWrite(redLedPin, LOW);
  } else {
    // If no motion detected, keep the green LED continuously on
    digitalWrite(greenLedPin, HIGH);
  }
}
