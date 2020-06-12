int  waterSens  = 0;

void setup() {

  Serial.begin(9600);

}

void loop() {

  waterSens = analogRead(A2);

  Serial.print("waterSens: ");
  Serial.println(waterSens);

  delay(100);

}
