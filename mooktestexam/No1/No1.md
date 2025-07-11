**โจทย์: ระบบวิเคราะห์ผลคะแนนนักเรียน**

คุณได้รับมอบหมายให้พัฒนาระบบประมวลผลและวิเคราะห์คะแนนสอบของนักเรียนในชั้นเรียนหนึ่ง โดยมีข้อกำหนดดังนี้:

**ส่วนที่ 1: การป้อนข้อมูลและการคำนวณคะแนนเฉลี่ยของแต่ละนักเรียน**

1.  **การรับข้อมูล:**
    
    -   โปรแกรมจะต้องรับ **จำนวนนักเรียน** (สูงสุด 10 คน) และ **จำนวนวิชา** (สูงสุด 5 วิชา) จากผู้ใช้
        
    -   ใช้ **`do-while` loop** ในการตรวจสอบว่าจำนวนนักเรียนและจำนวนวิชาที่ป้อนเข้ามานั้นอยู่ในช่วงที่ถูกต้อง (นักเรียน 1-10 คน, วิชา 1-5 วิชา) หากไม่ถูกต้องให้ป้อนใหม่
        
    -   สร้าง **อาร์เรย์ 2 มิติ** (เช่น `scores[นักเรียน][วิชา]`) เพื่อเก็บคะแนนของนักเรียนแต่ละคนในแต่ละวิชา (คะแนนอยู่ระหว่าง 0-100)
        
    -   ใช้ **`for` loop ซ้อน `for` loop** เพื่อรับคะแนนของนักเรียนแต่ละคนในแต่ละวิชา
        
    -   ใช้ **`while` loop** ในการตรวจสอบว่าคะแนนแต่ละวิชาที่ป้อนเข้ามาถูกต้อง (0-100) หากไม่ถูกต้องให้ป้อนใหม่
        
2.  **การคำนวณคะแนนเฉลี่ยนักเรียน:**
    
    -   สร้าง **ฟังก์ชันย่อย `calculateStudentAverage`** ที่รับคะแนนของนักเรียน 1 คน (ในรูปแบบ 1D array หรือ pointer) และจำนวนวิชา แล้วส่งค่า **คะแนนเฉลี่ยของนักเรียนคนนั้น** กลับมา
        
    -   เก็บคะแนนเฉลี่ยของนักเรียนแต่ละคนไว้ใน **อาร์เรย์ 1 มิติ** (เช่น `studentAverages[นักเรียน]`)
        

**ส่วนที่ 2: การจัดเกรดนักเรียนและคะแนนเฉลี่ยรายวิชา**

1.  **การจัดเกรด:**
    
    -   สร้าง **ฟังก์ชันย่อย `assignGrade`** ที่รับคะแนนเฉลี่ยของนักเรียน 1 คน (จากอาร์เรย์ `studentAverages`) แล้วส่งค่า **เกรด (เป็นตัวอักษร 'A', 'B', 'C', 'D', 'F')** กลับมา ตามเกณฑ์นี้:
        
        -   80−100=A
            
        -   70−79=B
            
        -   60−69=C
            
        -   50−59=D
            
        -   <50=F
            
    -   **แสดงผล** คะแนนเฉลี่ยและเกรดของนักเรียนแต่ละคน
        
2.  **คะแนนเฉลี่ยรายวิชา:**
    
    -   สร้าง **ฟังก์ชันย่อย `calculateSubjectAverage`** ที่รับอาร์เรย์ 2 มิติของคะแนนทั้งหมด และจำนวนนักเรียน/วิชา แล้วส่งค่า **คะแนนเฉลี่ยของแต่ละวิชาในรูปแบบอาร์เรย์ 1 มิติ** กลับมา
        
    -   **แสดงผล** คะแนนเฉลี่ยของแต่ละวิชา
        

**ส่วนที่ 3: สรุปภาพรวมและสถิติเพิ่มเติม**

1.  **คะแนนสูงสุด/ต่ำสุดในชั้นเรียน:**
    
    -   สร้าง **ฟังก์ชันย่อย `findOverallMinMax`** ที่รับอาร์เรย์ 2 มิติของคะแนนทั้งหมด และจำนวนนักเรียน/วิชา แล้วส่งค่า **คะแนนสูงสุดและต่ำสุดที่ทำได้ในชั้นเรียน** (จากทุกวิชา) กลับมา (อาจใช้ Pointer หรือ Struct ในการส่งกลับ 2 ค่า)
        
    -   **แสดงผล** คะแนนสูงสุดและต่ำสุดที่ค้นพบ
        
2.  **จำนวนนักเรียนที่ได้แต่ละเกรด:**
    
    -   ใช้ `for` loop เพื่อวนลูปผ่านอาร์เรย์ `studentAverages`
        
    -   นับจำนวนนักเรียนที่ได้แต่ละเกรด (A, B, C, D, F)
        
    -   **แสดงผลสรุป** จำนวนนักเรียนที่ได้แต่ละเกรด
        

**ข้อกำหนดเพิ่มเติม:**

-   ใช้ `main()` เป็นฟังก์ชันหลักในการควบคุม Flow ของโปรแกรม และเรียกใช้ฟังก์ชันย่อยที่เหมาะสม
    
-   ใช้ Global Constants สำหรับกำหนดขนาดสูงสุดของนักเรียนและวิชาเพื่อความยืดหยุ่นในการปรับแก้
    

----------