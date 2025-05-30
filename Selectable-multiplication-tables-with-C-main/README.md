# Selectable-multiplication-tables 🔢✨
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C Language](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))

---

## ภาษาไทย 🇹🇭

ยินดีต้อนรับสู่ **Selectable-multiplication-tables**! 👋 โปรเจกต์นี้คือโปรแกรมภาษา C 🚀 ที่ใช้งานง่ายสำหรับ **แสดงสูตรคูณ** ✖️ โดยให้ผู้ใช้สามารถระบุช่วงของแม่สูตรคูณที่ต้องการแสดงผลได้เอง เหมาะสำหรับการเรียนรู้และฝึกฝนสูตรคูณ.

### คุณสมบัติหลัก 🌟

* **เลือกช่วงแม่สูตรคูณ**: ผู้ใช้สามารถป้อน "แม่เริ่มต้น" และ "แม่สุดท้าย" ที่ต้องการให้โปรแกรมแสดงผล.
* **แสดงผลสูตรคูณ**: โปรแกรมจะแสดงผลสูตรคูณของทุกแม่ที่อยู่ในช่วงที่ผู้ใช้ระบุ ตั้งแต่ 1 ถึง 12.
* **โค้ดสะอาดและเข้าใจง่าย**: โค้ดถูกเขียนขึ้นมาอย่างเรียบง่าย ทำให้ง่ายต่อการทำความเข้าใจและนำไปปรับใช้.

### วิธีการใช้งาน 🚀

1.  **คอมไพล์โค้ด**: บันทึกโค้ดในชื่อไฟล์ `main.c` (หรือชื่ออื่นที่คุณต้องการ) จากนั้นใช้คอมไพเลอร์ C (เช่น `gcc`):
    ```bash
    gcc main.c -o multiplication_table
    ```
2.  **รันโปรแกรม**:
    ```bash
    ./multiplication_table
    ```
3.  **ป้อนค่า**: โปรแกรมจะขอให้คุณป้อนค่า "input start" (แม่สูตรคูณเริ่มต้น) และ "input End" (แม่สูตรคูณสุดท้าย) ตามลำดับ.

### ตัวอย่างการรันโปรแกรม 🖥️

```

input start = 2

input End = 4

---Table 2 ---

2 X 1 = 2

2 X 2 = 4

...

2 X 12 = 24

---Table 3 ---

3 X 1 = 3

...

3 X 12 = 36

---Table 4 ---

4 X 1 = 4

...

4 X 12 = 48

```

### โค้ดโดยย่อ 🧑‍💻

```c
#include <stdio.h> // input/output

int main()
{
    int start,end;

    printf("input start = "); // รับแม่สูตรคูณเริ่มต้น
    scanf("%d",&start);

    printf("input End = "); // รับแม่สูตรคูณจบท้าย
    scanf("%d",&end);

    // ลูปแสดงแม่สูตรคูณและผลคูณ
    for(int i = start; i <= end; i++){
        printf("---Table %d ---\n",i);
        for(int l =1; l<=12; l++){
            printf("%d X %d = %d\n",i,l,i*l);
        }
    }
    return 0;
}

```

### การมีส่วนร่วม 🤝

โปรเจกต์นี้มีวัตถุประสงค์เพื่อการเรียนรู้และสาธิต หากคุณมีข้อเสนอแนะในการปรับปรุงโค้ด หรือต้องการเพิ่มคุณสมบัติใหม่ๆ ยินดีต้อนรับการมีส่วนร่วมของคุณ!

### สิทธิ์การใช้งาน 📜

โปรเจกต์นี้อยู่ภายใต้ [MIT License](https://www.google.com/search?q=LICENSE)

----------

## English 🇬🇧

Welcome to **Selectable-multiplication-tables**! 👋 This project is a simple C program 🚀 for **displaying multiplication tables** ✖️, allowing the user to specify the range of tables to be displayed. It's ideal for learning and practicing multiplication.

### Key Features 🌟

-   **Select Table Range**: Users can input the "start table" and "end table" for the desired output.
-   **Display Multiplication Tables**: The program will display the multiplication tables for all numbers within the user-specified range, from 1 to 12.
-   **Clean and Understandable Code**: The code is written simply, making it easy to comprehend and adapt.

### How to Use 🚀

1.  **Compile the code**: Save the code as `main.c` (or your preferred filename), then use a C compiler (e.g., `gcc`):
    
    Bash
    
    ```
    gcc main.c -o multiplication_table
    
    ```
    
2.  **Run the program**:
    
    Bash
    
    ```
    ./multiplication_table
    
    ```
    
3.  **Enter values**: The program will prompt you to enter the "input start" (starting multiplication table) and "input End" (ending multiplication table) sequentially.

### Example Program Run 🖥️

```
input start = 2
input End = 4
---Table 2 ---
2 X 1 = 2
2 X 2 = 4
...
2 X 12 = 24
---Table 3 ---
3 X 1 = 3
...
3 X 12 = 36
---Table 4 ---
4 X 1 = 4
...
4 X 12 = 48

```

### Code Overview 🧑‍💻

C

```
#include <stdio.h> // input/output

int main()
{
    int start,end;

    printf("input start = "); // Get starting multiplication table
    scanf("%d",&start);

    printf("input End = "); // Get ending multiplication table
    scanf("%d",&end);

    // Loop to display multiplication tables and products
    for(int i = start; i <= end; i++){
        printf("---Table %d ---\n",i);
        for(int l =1; l<=12; l++){
            printf("%d X %d = %d\n",i,l,i*l);
        }
    }
    return 0;
}

```

### Contribution 🤝

This project is intended for learning and demonstration purposes. If you have suggestions for code improvements or wish to add new features, your contributions are welcome!

### License 📜

This project is licensed under the [MIT License](https://www.google.com/search?q=LICENSE)