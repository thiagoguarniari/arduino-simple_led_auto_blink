const int LED=13;     // declare led port
const int DELAY=1000; // declare delay

void setup() {
  pinMode(LED, OUTPUT); // configures port as output
}

void loop() {
  digitalWrite(LED, !digitalRead(LED));
  delay(DELAY);
}
