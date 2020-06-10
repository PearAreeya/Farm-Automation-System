## Farm Automation System
คือ ระบบดูแลฟาร์มด้วยเทคโนโลยีระบบอัตโนมัติที่สามารถตรวจวัดอุณหภูมิ และตรวจวัดความชื้นในดิน เมื่ออุณหภูมิร้อนเกิน 35 องศา จะมีเสียงแจ้งเตือนดัง 
และ สัญญาณไฟสีแดงขึ้น 
ตัวตรวจวัดความชื้นในดิน ถ้าดินมีความชื้นต่ำกว่า 50% จะพรวนหน้าดิน แต่ถ้าดินมีความชื้นมากกว่า 50% จะหยุดพรวนหน้าดิน 
และมีระบบเปิดไฟอัตโนมัติเมื่อมืด และปิดไฟไฟอัตโนมัติเมื่อเช้า
## ที่มาและความสำคัญ
การดูแลระบบฟาร์มทางการเกษตรเพื่อนำผลผลิตมาใช้ในครัวเรือนหรือเพื่อการค้าขายทำธุรกิจพบว่าใน การทำฟาร์มขนาดใหญ่นั้นมักจะพบปัญหาในการที่จะต้องคอยติดตามดูแลพืชผัก หรือต้องใช้คนดูแลฟาร์มจำนวนมากตลอดทั้งวัน เนื่องจากการทำฟาร์มนั้นต้องใช้คนดูแลฟาร์มจำนวนมากและตลอดทั้งวัน ดังนั้นเพื่อเพิ่มความสะดวกสบายในการดูแลฟาร์ม และลดปริมาณจำนวนคนดูแลภายในฟาร์ม ด้วยเหตุนี้และในปัจจุบันสภาพแวดล้อมเศรษฐกิจแย่ เราจึงคิดเทคโนโลยีการทำฟาร์มอัตโนมัติสามารถตรวจสอบอุณหภูมิ ความชื้นในดินโดยให้มีการพรวนหน้าดิน และ สามารถแจ้งสัญญาณเมื่ออากาศร้อนจัด  และมีระบบเปิด-ปิดไฟอัตโนมัติ
## กลุ่มเป้าหมาย
- เกษตรกรยุคใหม่ที่ต้องการลดค่าใช่จ่ายการดูแลฟาร์ม 
- เกษตรกรที่มีความต้องการใช้ระบบอัตโนมัติเพื่อดูแลฟาร์ม 
- บุคคลทั่วไปที่ต้องการระบบช่วยดูแลฟาร์ม
## รายละเอียดโปรเจค
### Perception Module
- Digital Temperature & Humidity Sensor
- Water Level Sensor
- Light Sensor
### Behavior
- อ่านค่า อุณหภูมิ ความชื้นในดิน และค่าแสง 
- เมื่ออุณหภูมิร้อนจะมีสัญญาณแจ้งเตือน
- พรวนหน้าดินเมื่อดินแห้ง
- เปิด-ปิดไฟอัตโนมัติ
### Manipulation Module
- LCD I2C Display
- Servo Motor
- Active Buzzer
- SMD RGB LED
### โครงสร้างพื้นฐาน
img1/q.PNG
### ระบบการทำงาน
https://github.com/PearAreeya/Farm-Automation-System/blob/master/img1/q.PNG?raw=true
