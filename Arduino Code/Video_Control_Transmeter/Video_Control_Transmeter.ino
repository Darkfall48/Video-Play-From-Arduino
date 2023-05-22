// Arduino Code for Video Player Control

int x = 1;

void setup() {
  // Initialize serial communication at a baud rate of 9600
  Serial.begin(9600);

  // Set the built-in LED pin as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Print the current value of 'x' to the serial port
  Serial.print(x++);

  // Reset 'x' to 1 if it exceeds 4
  if (x > 4)
    x = 1;

  // Turn on the built-in LED (HIGH voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  
  // Delay for 1 second
  delay(1000);
  
  // Turn off the built-in LED (LOW voltage level)
  digitalWrite(LED_BUILTIN, LOW);
  
  // Delay for 5 seconds before repeating the loop
  delay(5000);
}
