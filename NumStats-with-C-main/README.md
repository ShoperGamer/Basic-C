# NumStats 📊✨
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C Language](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))

---

## ภาษาไทย 🇹🇭

ยินดีต้อนรับสู่ **NumStats**! 👋 โปรเจกต์นี้คือโปรแกรมภาษา C 🚀 ที่เรียบง่ายสำหรับ **การคำนวณผลรวมและค่าเฉลี่ยของชุดตัวเลข** ➕➗ โดยผู้ใช้สามารถระบุจำนวนตัวเลขที่ต้องการป้อนได้เอง เหมาะสำหรับการเรียนรู้พื้นฐานการวนซ้ำและการคำนวณในภาษา C.

### คุณสมบัติหลัก 🌟

* **รับจำนวนตัวเลข**: ผู้ใช้ระบุจำนวนตัวเลขที่ต้องการป้อน.
* **รับค่าตัวเลข**: โปรแกรมจะวนรับค่าตัวเลขทีละตัวตามจำนวนที่ระบุ.
* **คำนวณผลรวม**: หาผลรวมของตัวเลขทั้งหมดที่ป้อนเข้ามา.
* **คำนวณค่าเฉลี่ย**: คำนวณค่าเฉลี่ยของตัวเลขเหล่านั้น.
* **แสดงผลลัพธ์**: แสดงผลรวมและค่าเฉลี่ยที่คำนวณได้ออกทางหน้าจอ.

### วิธีการใช้งาน 🚀

1.  **คอมไพล์โค้ด**: บันทึกโค้ดในชื่อไฟล์ `main.c` (หรือชื่ออื่นที่คุณต้องการ) จากนั้นใช้คอมไพเลอร์ C (เช่น `gcc`):
    ```bash
    gcc main.c -o numstats
    ```
    (สมมติว่าโค้ดของคุณอยู่ในไฟล์ `main.c`)
2.  **รันโปรแกรม**:
    ```bash
    ./numstats
    ```
3.  **ป้อนค่า**: โปรแกรมจะขอให้คุณป้อน "จำนวนตัวเลข" ที่ต้องการคำนวณก่อน จากนั้นจึงป้อนตัวเลขทีละตัวตามจำนวนที่ระบุ.

### ตัวอย่างการรันโปรแกรม 🖥️


```

input = 3

1 number = 10

2 number = 20

3 number = 30

total = 60.00

avg = 20.00

```

### โค้ดโดยย่อ 🧑‍💻

```c
#include <stdio.h> // input/output

int main()
{
    int count; // จำนวนตัวเลขที่ต้องการคำนวณ
    float sum = 0.0, avg; // ผลรวมและค่าเฉลี่ย (เริ่มต้นผลรวมเป็น 0.0)

    printf("input = "); // รับจำนวนตัวเลข
    scanf("%d",&count);

    int number[count]; // สร้าง Array สำหรับเก็บตัวเลข

    // รับตัวเลขเข้า Array
    for (int i=0; i < count; i++){ // ควรเริ่มที่ i=0 เพื่อให้สอดคล้องกับ Array index
        printf("%d number =  ",i+1); // แสดงลำดับตัวเลขที่กำลังป้อน
        scanf("%d",&number[i]);
    }

    // คำนวณผลรวม
    for(int j=0; j < count; j++){ // ควรเริ่มที่ j=0
        sum += number[j];
    }

    // คำนวณค่าเฉลี่ย
    avg = sum / count;

    printf("total = %.2f\n",sum);
    printf("avg = %.2f\n",avg);

    return 0;
}

```

### การมีส่วนร่วม 🤝

โปรเจกต์นี้มีวัตถุประสงค์เพื่อการเรียนรู้และสาธิต หากคุณมีข้อเสนอแนะในการปรับปรุงโค้ด หรือต้องการเพิ่มคุณสมบัติใหม่ๆ เช่น การหาค่าสูงสุด-ต่ำสุด, หรือการจัดเก็บข้อมูลลงไฟล์ ยินดีต้อนรับการมีส่วนร่วมของคุณ!

### สิทธิ์การใช้งาน 📜

โปรเจกต์นี้อยู่ภายใต้ [MIT License](https://www.google.com/search?q=LICENSE)

----------

## English 🇬🇧

Welcome to **NumStats**! 👋 This project is a simple C program 🚀 designed for **calculating the sum and average of a set of numbers** ➕➗. Users can specify how many numbers they want to input. It's ideal for learning fundamental looping and calculation concepts in C.

### Key Features 🌟

-   **Get Number Count**: The user specifies the total number of entries.
-   **Input Numbers**: The program iteratively receives each number.
-   **Calculate Sum**: Computes the total sum of all entered numbers.
-   **Calculate Average**: Determines the average of those numbers.
-   **Display Results**: Presents both the calculated sum and average on the screen.

### How to Use 🚀

1.  **Compile the code**: Save the code as `main.c` (or your preferred filename), then use a C compiler (e.g., `gcc`):
    
    Bash
    
    ```
    gcc main.c -o numstats
    
    ```
    
    (Assuming your code is in `main.c`)
2.  **Run the program**:
    
    Bash
    
    ```
    ./numstats
    
    ```
    
3.  **Enter values**: The program will first prompt you to enter the "count" (number of values) you wish to calculate, then you will input each number one by one.

### Example Program Run 🖥️

```
input = 3
1 number =  10
2 number =  20
3 number =  30
total = 60.00
avg = 20.00

```

### Code Overview 🧑‍💻

C

```
#include <stdio.h> // input/output

int main()
{
    int count; // Number of values to calculate
    float sum = 0.0, avg; // Sum and average (initialize sum to 0.0)

    printf("input = "); // Get the count of numbers
    scanf("%d",&count);

    int number[count]; // Create an array to store numbers

    // Receive numbers into the array
    for (int i=0; i < count; i++){ // Should start at i=0 for array indexing
        printf("%d number =  ",i+1); // Display the current number's order
        scanf("%d",&number[i]);
    }

    // Calculate sum
    for(int j=0; j < count; j++){ // Should start at j=0
        sum += number[j];
    }

    // Calculate average
    avg = sum / count;

    printf("total = %.2f\n",sum);
    printf("avg = %.2f\n",avg);

    return 0;
}

```

### Contribution 🤝

This project is intended for learning and demonstration purposes. If you have suggestions for code improvements or wish to add new features such as finding min/max values or saving data to a file, your contributions are welcome!

### License 📜

This project is licensed under the [MIT License](https://www.google.com/search?q=LICENSE)