const int blue = 6;
const int red = 5;
const int green = 4;


void setup() {
  
pinMode(blue, OUTPUT);
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);

}

void loop() {
  
  digitalWrite(blue,HIGH);
  delay(1000);
  digitalWrite(blue,LOW);
  delay(1000);
  digitalWrite(red,HIGH);
  delay(1000);
  digitalWrite(red, LOW);
  delay(1000);
  digitalWrite(green, HIGH);
  delay(1000);
  digitalWrite(green, LOW);
  delay(1000);


  
  
}
