int value = 0;

void setup() {

  Serial.begin(9600);

}

void loop() {

  value = analogRead(A5);

  Serial.print("Raw value: ");
  Serial.println(value);

  delay(100);

}
