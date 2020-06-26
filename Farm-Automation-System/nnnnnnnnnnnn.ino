#include <Servo.h>
#include <Wire.h> 
#include <dht.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

Servo  myservo;
int waterSens = A2;
int pos = 0;//define servo position

int buzzer = 2;
int DHTA0 = A0;
dht sensor;

int green = 3;
int red = 4;
int analogPin = A5;
int val = 0; 

void setup()
{
   pinMode(buzzer, OUTPUT);
   lcd.init();
   lcd.backlight();   
   lcd.begin(16,2); //16 by 2 character display
   Serial.begin(57600);
    myservo.attach(13);

   pinMode(green, OUTPUT);//set green as an output
   pinMode(red, OUTPUT);//set green as an output
}
 
void loop()
{
  
  int sensorValue = analogRead(waterSens);//read the water sensor value
          
  sensorValue = map(sensorValue, 0, 1023, 0, 180); 
     if (sensorValue*100/500 < 10) {
        for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
      
     }
     
  else{
    myservo.write(0);
  }
  Serial.println(sensorValue);
  delay(20);        
  
  delay(1000); //wait a sec (recommended for DHT11)
  sensor.read11(DHTA0);
  lcd.clear();

 
  lcd.setCursor(0,0); 
  lcd.print("Tem  : ");
  lcd.print(sensor.temperature);
  lcd.print((char)223);
  lcd.print("C");
  lcd.setCursor(0,1); 
  lcd.print("Soil : ");
  lcd.print(sensorValue*100/500);
  lcd.print((char)223);
  lcd.print("%");
  delay(500);
  
if(sensor.temperature >= 35)
{
  digitalWrite(red,HIGH);
  digitalWrite(buzzer, HIGH);
  delay(500);
  
}
   else{
      
  digitalWrite(buzzer, LOW);
  }

  
    val = analogRead(analogPin);  //อ่านค่าสัญญาณ analog 
    Serial.print("val = "); // พิมพ์ข้อมความส่งเข้าคอมพิวเตอร์ "val = "
    Serial.println(val); // พิมพ์ค่าของตัวแปร val
    if (val <= 800) { // ค่า 100 สามารถกำหนดปรับได้ตามค่าแสงในห้องต่างๆ
    digitalWrite(green,LOW); // สั่งให้ LED ดับ
  }
    else{
    digitalWrite(green,HIGH); // สั่งให้ LED ติดสว่าง
  }


}
