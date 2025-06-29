2. การจัดหมวดหมู่ปริมาณน้ำฝน 

จงเขียนโปรแกรมรับค่าปริมาณน้ำฝน (มิลลิเมตร, ตัวเลขทศนิยม) จากผู้ใช้ โดยแสดงข้อความ "Enter rainfall (mm): " แล้วนำค่ามาตรวจสอบเงื่อนไขในตารางที่กำหนดให้:

น้อยกว่า 0: "Error: Negative rainfall!"

0−10: "Light Rain"

10.1−50: "Moderate Rain"

50.1−100: "Heavy Rain"

มากกว่า 100: "Extreme Rainfall"

ตัวอย่างอินพุตและเอาต์พุต:

Enter rainfall (mm): -2
Error: Negative rainfall!

Enter rainfall (mm): 8.5
Light Rain

Enter rainfall (mm): 60.0
Heavy Rain