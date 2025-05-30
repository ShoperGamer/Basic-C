# NewEmployee 🧑‍💼✨
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C Language](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))

---

## ภาษาไทย 🇹🇭

ยินดีต้อนรับสู่ **NewEmployee**! 👋 โปรเจกต์นี้คือโปรแกรมภาษา C 🚀 ที่ออกแบบมาเพื่อ **สาธิตการจัดการข้อมูลพนักงาน** 📝 โดยใช้ `struct` (โครงสร้างข้อมูล) ผู้ใช้สามารถป้อนข้อมูลของพนักงานใหม่ เช่น ชื่อ เพศ อายุ และประสบการณ์ (EXP) พร้อมมีการตรวจสอบความถูกต้องของข้อมูลที่ป้อนเข้ามาด้วย.

### คุณสมบัติหลัก 🌟

* **สร้างข้อมูลพนักงาน**: รับข้อมูลพนักงานใหม่ ได้แก่ ชื่อ, เพศ (M/F), อายุ, และประสบการณ์ (EXP).
* **การตรวจสอบข้อมูล**:
    * **เพศ**: ตรวจสอบว่าป้อน 'M', 'm', 'F', หรือ 'f' เท่านั้น.
    * **อายุ**: ตรวจสอบว่าอายุเป็นตัวเลขที่สมเหตุสมผล (มากกว่า 20 และน้อยกว่า 80).
    * **ประสบการณ์**: ตรวจสอบว่าประสบการณ์เป็นตัวเลขที่ไม่ติดลบ.
* **แสดงข้อมูลพนักงาน**: แสดงรายละเอียดทั้งหมดของพนักงานที่ป้อนเข้ามา.
* **เพิ่มประสบการณ์อัตโนมัติ**: สาธิตการเพิ่มค่าประสบการณ์ (EXP) ให้กับพนักงานหลังจากแสดงข้อมูล.
* **วนซ้ำการป้อนข้อมูล**: ผู้ใช้สามารถเลือกที่จะเพิ่มข้อมูลพนักงานคนถัดไปได้ (y/n).

### โครงสร้างโค้ดโดยย่อ 🧑‍💻

โปรเจกต์นี้ใช้ `typedef struct Employee` เพื่อกำหนดโครงสร้างข้อมูลสำหรับพนักงาน และมีฟังก์ชันหลัก 3 ฟังก์ชัน:

* `createEmployee()`: สำหรับรับข้อมูลพนักงานใหม่จากผู้ใช้ พร้อมการตรวจสอบข้อมูล.
* `showdata(Employee *person)`: สำหรับแสดงข้อมูลของพนักงาน.
* `addExperience(Employee *person, int amount)`: สำหรับเพิ่มค่าประสบการณ์ให้กับพนักงาน.

```c
// โครงสร้างข้อมูล Employee
typedef struct {
    char name[20];
    char gender;
    int age;
    int exp;
} Employee;

// ฟังก์ชันสำหรับสร้างและรับข้อมูลพนักงาน
Employee createEmployee();

// ฟังก์ชันสำหรับแสดงข้อมูลพนักงาน
void showdata(Employee *person);

// ฟังก์ชันสำหรับเพิ่มประสบการณ์
void addExperience(Employee *person, int amount);

```

### วิธีการคอมไพล์และรัน 🚀

1.  **บันทึกโค้ด**: บันทึกโค้ดด้านบนในชื่อไฟล์ `main.c` (หรือชื่ออื่นที่คุณต้องการ).
2.  **คอมไพล์**: เปิด Terminal หรือ Command Prompt แล้วใช้คอมไพเลอร์ C (เช่น `gcc`):
    
    Bash
    
    ```
    gcc main.c -o new_employee
    
    ```
    
3.  **รัน**:
    
    Bash
    
    ```
    ./new_employee
    
    ```
    
4.  **ป้อนค่า**: ทำตามคำแนะนำบนหน้าจอเพื่อป้อนข้อมูลพนักงาน.

### ตัวอย่างการรันโปรแกรม 🖥️

```
--- กรอกรายละเอียดพนักงานใหม่ ---
กรุณาป้อนชื่อ: สมชาย ใจดี
กรุณาป้อนเพศ (M/F): M
กรุณาป้อนอายุ: 25
กรุณาป้อนประสบการณ์ (EXP): 3

--- ข้อมูลพนักงาน ---
ชื่อ   = สมชาย ใจดี
เพศ  = M
อายุ  = 25
EXP  = 3
---------------
EXP เพิ่มขึ้น! EXP ใหม่: 13
---------------------
ต้องการเพิ่มรายชื่อพนักงานอีกคนหรือไม่? (y/n): n

จบการทำงาน. พบกันใหม่!

```

### การมีส่วนร่วม 🤝

โปรเจกต์นี้มีวัตถุประสงค์เพื่อการเรียนรู้และสาธิต หากคุณมีข้อเสนอแนะในการปรับปรุงโค้ด หรือต้องการเพิ่มคุณสมบัติใหม่ๆ เช่น การจัดเก็บข้อมูลพนักงานลงไฟล์, การค้นหา, หรือการลบข้อมูล ยินดีต้อนรับการมีส่วนร่วมของคุณ!

### สิทธิ์การใช้งาน 📜

โปรเจกต์นี้อยู่ภายใต้ [MIT License](https://www.google.com/search?q=LICENSE)

----------

## English 🇬🇧

Welcome to **NewEmployee**! 👋 This project is a simple C program 🚀 designed to **demonstrate employee data management** 📝 using `struct` (data structures). Users can input details for new employees, such as name, gender, age, and experience (EXP), with built-in input validation.

### Key Features 🌟

-   **Employee Data Creation**: Input details for new employees, including name, gender (M/F), age, and experience (EXP).
-   **Input Validation**:
    -   **Gender**: Ensures input is 'M', 'm', 'F', or 'f'.
    -   **Age**: Validates that age is a reasonable positive number (between 20 and 80).
    -   **Experience**: Ensures experience is a non-negative number.
-   **Display Employee Information**: Shows all recorded details of the employee.
-   **Automatic Experience Increment**: Demonstrates automatically adding experience (EXP) after displaying employee data.
-   **Looping Input**: Users can choose to add another employee's details (y/n).

### Code Structure Overview 🧑‍💻

This project uses a `typedef struct Employee` to define the data structure for employees and includes three main functions:

-   `createEmployee()`: For collecting new employee data from the user with input validation.
-   `showdata(Employee *person)`: For displaying employee details.
-   `addExperience(Employee *person, int amount)`: For increasing an employee's experience value.

<!-- end list -->

C

```
// Employee data structure
typedef struct {
    char name[20];
    char gender;
    int age;
    int exp;
} Employee;

// Function to create and get employee data
Employee createEmployee();

// Function to display employee data
void showdata(Employee *person);

// Function to add experience
void addExperience(Employee *person, int amount);

```

### How to Compile and Run 🚀

1.  **Save the Code**: Save the code above as `main.c` (or your preferred filename).
2.  **Compile**: Open your Terminal or Command Prompt and use a C compiler (e.g., `gcc`):
    
    Bash
    
    ```
    gcc main.c -o new_employee
    
    ```
    
3.  **Run**:
    
    Bash
    
    ```
    ./new_employee
    
    ```
    
4.  **Input Values**: Follow the on-screen prompts to enter employee information.

### Example Program Run 🖥️

```
--- Enter New Employee Details ---
Please enter name: John Doe
Please enter gender (M/F): M
Please enter age: 28
Please enter experience (EXP): 5

--- Employee Information ---
Name   = John Doe
Gender  = M
Age  = 28
EXP  = 5
---------------
EXP Increased! New EXP: 15
---------------------
Do you want to add another employee? (y/n): n

Program finished. See you next time!

```

### Contribution 🤝

This project is intended for learning and demonstration purposes. If you have suggestions for code improvements or wish to add new features such as saving employee data to a file, searching, or deleting records, your contributions are welcome!

### License 📜

This project is licensed under the [MIT License](https://www.google.com/search?q=LICENSE)