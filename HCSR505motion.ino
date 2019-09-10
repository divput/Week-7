void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(6) == HIGH) {
    Serial.println("Active");
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else {
    Serial.println("Inactive");
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(1000);
}
