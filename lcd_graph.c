/*
    Project name : LED Bar Graph Display
    Modified Date: 11-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-led-bar-graph-display
*/

// Define the number of LEDs in the bar graph
const int numLEDs = 5;

// Define the pins connected to each LED in the bar graph
int ledPins[numLEDs] = {2, 3, 4, 5, 6};

void setup() {
  // Set the LED pins as output
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Example: Turn on LEDs 0 to 2
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(500); // Adjust the delay as needed
  }

  // Example: Turn off all LEDs
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], LOW);
    delay(500); // Adjust the delay as needed
  }
}
