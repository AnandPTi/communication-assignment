// This Arduino sketch generates a sine wave and sends the values to another Arduino.
// It uses the Serial communication for data transmission.

void setup() {
  // Initialize the serial communication at a baud rate of 9600
  Serial.begin(9600);
}

void loop() {
  // Create a variable to store the angle (in radians) for the sine wave
  float angle;

  // Iterate through 360 degrees (0 to 359)
  for (int i = 0; i < 360; i++) {
    // Convert the angle to radians
    angle = i * 3.14159265 / 180.0;

    // Calculate the sine value for the current angle
    float sineValue = sin(angle);

    // Send the sine value to the other Arduino with up to 4 decimal places
    Serial.println(sineValue, 4);

    // Adjust the delay to control the frequency of the waveform (100ms here)
    delay(100);
  }
}
