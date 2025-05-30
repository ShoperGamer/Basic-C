# Basic-Discount-Tool 💰✨
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C Language](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))

---

## ภาษาไทย 🇹🇭

ยินดีต้อนรับสู่ **Basic-Discount-Tool**! 👋 โปรเจกต์นี้คือโปรแกรมภาษา C 🚀 ที่เรียบง่ายสำหรับ **คำนวณราคาสินค้าหลังจากหักส่วนลด** 💸 โดยมีส่วนลดคงที่ที่กำหนดไว้ในโปรแกรม เหมาะสำหรับการเรียนรู้พื้นฐานฟังก์ชัน, การรับข้อมูล, และการคำนวณในภาษา C.

### คุณสมบัติหลัก 🌟

* **ส่วนลดคงที่**: โปรแกรมมีฟังก์ชัน `promotion()` ที่กำหนดส่วนลดคงที่ไว้ (ปัจจุบันคือ 60 บาท).
* **รับราคาสินค้า**: ผู้ใช้สามารถป้อนราคาสินค้าเริ่มต้น.
* **คำนวณราคาสุทธิ**: คำนวณราคาสินค้าหลังจากหักส่วนลดแล้ว.
* **แสดงผลลัพธ์**: แสดงจำนวนเงินส่วนลดและราคารวมสุดท้ายออกทางหน้าจอ.

### วิธีการใช้งาน 🚀

1.  **คอมไพล์โค้ด**: บันทึกโค้ดในชื่อไฟล์ `main.c` (หรือชื่ออื่นที่คุณต้องการ) จากนั้นใช้คอมไพเลอร์ C (เช่น `gcc`):
    ```bash
    gcc main.c -o discount_tool
    ```
2.  **รันโปรแกรม**:
    ```bash
    ./discount_tool
    ```
3.  **ป้อนค่า**: โปรแกรมจะแสดงส่วนลดที่ได้รับ และขอให้คุณป้อน "ราคาสินค้า" (Price).

### ตัวอย่างการรันโปรแกรม 🖥️


```

วันนี้ลด 60 บาท

Price = 100

total = 40 Bath

```

### โค้ดโดยย่อ 🧑‍💻

```c
#include <stdio.h> //input/output

int promotion(); // ประกาศฟังก์ชัน promotion

int main()
{
    int pro = promotion(); // เรียกใช้ฟังก์ชัน promotion เพื่อรับส่วนลด
    printf("วันนี้ลด %d บาท \n",pro); // แสดงส่วนลด

    int price;
    printf("Price = "); // รับราคาสินค้า
    scanf("%d",&price);

    int total = price - pro ; // คำนวณราคาสุทธิ
    printf("total = %d Bath\n",total); // แสดงราคาสุทธิ
    return 0;
}

// ฟังก์ชัน promotion ที่กำหนดส่วนลดคงที่
int promotion (){
    return 60; // ส่วนลด 60 บาท
}

```

### การมีส่วนร่วม 🤝

โปรเจกต์นี้มีวัตถุประสงค์เพื่อการเรียนรู้และสาธิต หากคุณมีข้อเสนอแนะในการปรับปรุงโค้ด หรือต้องการเพิ่มคุณสมบัติใหม่ๆ เช่น การรับส่วนลดแบบเปอร์เซ็นต์, การให้ผู้ใช้กำหนดส่วนลดเอง, หรือการมีส่วนลดหลายแบบ ยินดีต้อนรับการมีส่วนร่วมของคุณ!

### สิทธิ์การใช้งาน 📜

โปรเจกต์นี้อยู่ภายใต้ [MIT License](https://www.google.com/search?q=LICENSE)

----------

## English 🇬🇧

Welcome to **Basic-Discount-Tool**! 👋 This project is a simple C program 🚀 designed to **calculate product prices after applying a discount** 💸. It features a fixed discount value defined within the program, making it ideal for learning basic functions, input handling, and calculations in C.

### Key Features 🌟

-   **Fixed Discount**: The program includes a `promotion()` function that defines a fixed discount (currently 60 Baht).
-   **Product Price Input**: Users can input the initial product price.
-   **Net Price Calculation**: Calculates the final price after the discount is applied.
-   **Result Display**: Shows the discount amount and the final total price on the screen.

### How to Use 🚀

1.  **Compile the code**: Save the code as `main.c` (or your preferred filename), then use a C compiler (e.g., `gcc`):
    
    Bash
    
    ```
    gcc main.c -o discount_tool
    
    ```
    
2.  **Run the program**:
    
    Bash
    
    ```
    ./discount_tool
    
    ```
    
3.  **Enter values**: The program will first display the applied discount and then prompt you to enter the "Price".

### Example Program Run 🖥️

```
วันนี้ลด 60 บาท 
Price = 100
total = 40 Bath

```

### Code Overview 🧑‍💻

C

```
#include <stdio.h> //input/output

int promotion(); // Function declaration for promotion

int main()
{
    int pro = promotion(); // Call promotion function to get discount
    printf("วันนี้ลด %d บาท \n",pro); // Display discount

    int price;
    printf("Price = "); // Get product price
    scanf("%d",&price);

    int total = price - pro ; // Calculate net price
    printf("total = %d Bath\n",total); // Display total price
    return 0;
}

// Promotion function that defines a fixed discount
int promotion (){
    return 60; // 60 Baht discount
}

```

### Contribution 🤝

This project is intended for learning and demonstration purposes. If you have suggestions for code improvements or wish to add new features such as percentage-based discounts, user-defined discounts, or multiple discount types, your contributions are welcome!

### License 📜

This project is licensed under the [MIT License](https://www.google.com/search?q=LICENSE)