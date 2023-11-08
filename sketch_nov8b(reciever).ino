// This Arduino sketch reads data from the Serial input and processes it.

void setup() {
  // Initialize the serial communication at a baud rate of 9600
  Serial.begin(9600);
}

void loop() {
  // Check if there's data available in the Serial input buffer
  if (Serial.available() > 0) {
    // Read a floating-point value from the Serial input
    float receivedValue = Serial.parseFloat();
    
    // Do something with the received value, e.g., output it on the Serial Monitor
    Serial.println(receivedValue, 4);  // Send the received value with up to 4 decimal places
  }
}
