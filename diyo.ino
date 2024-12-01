

char value;

void setup() {
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}
void relay_on() {
  digitalWrite(8, HIGH);
}
void relay_off() {
  digitalWrite(8, LOW);
}




void loop() {
  if (Serial.available() > 0) {

    value = Serial.read();
    Serial.println(value);
    if (value == 'F') {
      relay_on();
    }
  }
  if (value == 'S') {
    relay_off();
  }
}
