# Measure BMI 🏋️‍♀️📊
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C Language](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))

---

## ภาษาไทย 🇹🇭

ยินดีต้อนรับสู่ **Measure BMI**! 👋 โปรเจกต์นี้คือโปรแกรมภาษา C 🚀 ที่เรียบง่ายสำหรับ **คำนวณค่าดัชนีมวลกาย (BMI)** 🧍‍♂️ ผู้ใช้เพียงแค่ป้อนน้ำหนัก (กิโลกรัม) และส่วนสูง (เซนติเมตร) โปรแกรมก็จะคำนวณค่า BMI และแสดงผลลัพธ์ให้คุณทราบ เหมาะสำหรับการเรียนรู้พื้นฐานการรับข้อมูล, การคำนวณ, และการแสดงผลในภาษา C.

### คุณสมบัติหลัก 🌟

* **รับค่าน้ำหนัก**: ผู้ใช้สามารถป้อนน้ำหนักเป็นกิโลกรัม.
* **รับค่าส่วนสูง**: ผู้ใช้สามารถป้อนส่วนสูงเป็นเซนติเมตร.
* **แปลงหน่วยส่วนสูง**: โปรแกรมจะแปลงส่วนสูงจากเซนติเมตรเป็นเมตรโดยอัตโนมัติ.
* **คำนวณค่า BMI**: คำนวณค่า BMI ตามสูตรมาตรฐาน: น้ำหนัก (kg) / (ส่วนสูง (m) * ส่วนสูง (m)).
* **แสดงผลลัพธ์**: แสดงค่า BMI ที่คำนวณได้ออกทางหน้าจอ.

### วิธีการใช้งาน 🚀

1.  **คอมไพล์โค้ด**: บันทึกโค้ดในชื่อไฟล์ `main.c` (หรือชื่ออื่นที่คุณต้องการ) จากนั้นใช้คอมไพเลอร์ C (เช่น `gcc`):
    ```bash
    gcc main.c -o measure_bmi
    ```
2.  **รันโปรแกรม**:
    ```bash
    ./measure_bmi
    ```
3.  **ป้อนค่า**: โปรแกรมจะขอให้คุณป้อน "น้ำหนัก (kg)" และ "ส่วนสูง (cm²)" ตามลำดับ.

### ตัวอย่างการรันโปรแกรม 🖥️


```

Welcome to วัดค่า BMI

ใส่ค่าน้ำหนัก(kg):

65

ใส่ค่าส่วนสูง(cm²):

170

ค่า BMI ของคุณ = 22.49

```

### โค้ดโดยย่อ 🧑‍💻

```c
#include <stdio.h> // input/output

int main()
{
    float weight; // น้ำหนัก (kg)
    float height_cm; // ส่วนสูง (cm)
    float height_m; // ส่วนสูง (m)
    float bmi_value; // ค่า BMI

    printf("Welcome to วัดค่า BMI\n");

    printf("ใส่ค่าน้ำหนัก(kg): \n");
    scanf("%f", &weight);

    printf("ใส่ค่าส่วนสูง(cm²): \n");
    scanf("%f", &height_cm);

    height_m = height_cm / 100; // แปลง cm เป็น m

    bmi_value = weight / (height_m * height_m); // คำนวณ BMI

    printf("ค่า BMI ของคุณ = %.2f\n", bmi_value);

    return 0;
}

```

### การมีส่วนร่วม 🤝

โปรเจกต์นี้มีวัตถุประสงค์เพื่อการเรียนรู้และสาธิต หากคุณมีข้อเสนอแนะในการปรับปรุงโค้ด หรือต้องการเพิ่มคุณสมบัติใหม่ๆ เช่น การแสดงผลลัพธ์ว่าอยู่ในเกณฑ์ใด (ผอม, ปกติ, อ้วน) ยินดีต้อนรับการมีส่วนร่วมของคุณ!

### สิทธิ์การใช้งาน 📜

โปรเจกต์นี้อยู่ภายใต้ [MIT License](https://www.google.com/search?q=LICENSE)

----------

## English 🇬🇧

Welcome to **Measure BMI**! 👋 This project is a simple C program 🚀 designed to **calculate Body Mass Index (BMI)** 🧍‍♂️. Users simply input their weight (in kilograms) and height (in centimeters), and the program will compute and display their BMI. It's ideal for learning basic input, calculation, and output in the C language.

### Key Features 🌟

-   **Weight Input**: Users can enter their weight in kilograms.
-   **Height Input**: Users can enter their height in centimeters.
-   **Height Conversion**: The program automatically converts height from centimeters to meters.
-   **BMI Calculation**: Computes BMI using the standard formula: weight (kg) / (height (m) * height (m)).
-   **Result Display**: Shows the calculated BMI value on the screen.

### How to Use 🚀

1.  **Compile the code**: Save the code as `main.c` (or your preferred filename), then use a C compiler (e.g., `gcc`):
    
    Bash
    
    ```
    gcc main.c -o measure_bmi
    
    ```
    
2.  **Run the program**:
    
    Bash
    
    ```
    ./measure_bmi
    
    ```
    
3.  **Enter values**: The program will prompt you to enter your "weight (kg)" and "height (cm²)" respectively.

### Example Program Run 🖥️

```
Welcome to วัดค่า BMI
ใส่ค่าน้ำหนัก(kg): 
65
ใส่ค่าส่วนสูง(cm²): 
170
ค่า BMI ของคุณ = 22.49

```

### Code Overview 🧑‍💻

C

```
#include <stdio.h> // input/output

int main()
{
    float weight; // Weight (kg)
    float height_cm; // Height (cm)
    float height_m; // Height (m)
    float bmi_value; // BMI value

    printf("Welcome to วัดค่า BMI\n");

    printf("ใส่ค่าน้ำหนัก(kg): \n");
    scanf("%f", &weight);

    printf("ใส่ค่าส่วนสูง(cm²): \n");
    scanf("%f", &height_cm);

    height_m = height_cm / 100; // Convert cm to m

    bmi_value = weight / (height_m * height_m); // Calculate BMI

    printf("ค่า BMI ของคุณ = %.2f\n", bmi_value);

    return 0;
}

```

### Contribution 🤝

This project is intended for learning and demonstration purposes. If you have suggestions for code improvements or wish to add new features, such as displaying BMI categories (underweight, normal, overweight), your contributions are welcome!

### License 📜

This project is licensed under the [MIT License](https://www.google.com/search?q=LICENSE)