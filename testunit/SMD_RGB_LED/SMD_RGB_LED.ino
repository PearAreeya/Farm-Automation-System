const int blue = 6;//set blue to pin 3
const int red = 5;//set red to pin 5
const int green = 4;//set green to pin 6


void setup() {
  
pinMode(blue, OUTPUT);//set blue as an output
pinMode(red, OUTPUT);//set red as an output
pinMode(green, OUTPUT);//set green as an output

}

void loop() {
  
  digitalWrite(blue,HIGH);//color sequence for cycling through blue, red, green. One at a time.
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
