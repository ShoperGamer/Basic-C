# bank of judy 🏦✨
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C Language](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))

---

## ภาษาไทย 🇹🇭

ยินดีต้อนรับสู่ **bankofjudy**! 👋 โปรเจกต์นี้คือโปรแกรมภาษา C 🚀 ที่จำลองระบบบัญชีธนาคารอย่างง่าย 🏧 ให้ผู้ใช้สามารถทำรายการพื้นฐานได้แก่ **ฝากเงิน, ถอนเงิน, และดูยอดเงินคงเหลือ** 💰 โปรแกรมนี้เหมาะสำหรับผู้เริ่มต้นที่ต้องการเรียนรู้การเขียนโปรแกรมในภาษา C โดยใช้ฟังก์ชันและการจัดการกับตัวแปร Global.

### คุณสมบัติหลัก 🌟

* **ยอดเงินเริ่มต้น**: บัญชีเริ่มต้นด้วยยอดเงิน 1000 บาท.
* **ฝากเงิน**: อนุญาตให้ผู้ใช้ฝากเงินเข้าบัญชีได้ โดยมีการตรวจสอบว่าจำนวนเงินฝากต้องมากกว่า 0.
* **ถอนเงิน**: อนุญาตให้ผู้ใช้ถอนเงินจากบัญชี โดยมีการตรวจสอบว่าจำนวนเงินถอนต้องมากกว่า 0 และยอดเงินคงเหลือเพียงพอ.
* **ดูยอดเงินคงเหลือ**: ผู้ใช้สามารถตรวจสอบยอดเงินปัจจุบันในบัญชีได้ตลอดเวลา.
* **ระบบเมนู**: มีเมนูแบบโต้ตอบเพื่อให้ผู้ใช้เลือกทำรายการต่างๆ.
* **เคลียร์ Input Buffer**: มีฟังก์ชันสำหรับเคลียร์ input buffer เพื่อป้องกันปัญหาการรับค่าที่ไม่พึงประสงค์.

### วิธีการใช้งาน 🚀

1.  **คอมไพล์โค้ด**: บันทึกโค้ดในชื่อไฟล์ `main.c` (หรือชื่ออื่นที่คุณต้องการ) จากนั้นใช้คอมไพเลอร์ C (เช่น `gcc`):
    ```bash
    gcc main.c -o bankofjudy
    ```
2.  **รันโปรแกรม**:
    ```bash
    ./bankofjudy
    ```
3.  **ทำรายการ**: โปรแกรมจะแสดงเมนูให้คุณเลือกทำรายการ (ฝาก, ถอน, ดูยอด, ออก). ป้อนตัวเลข 1-4 เพื่อดำเนินการ.

### ตัวอย่างการรันโปรแกรม 🖥️


```

--- ระบบบัญชีธนาคารอย่างง่าย ---

ยอดเงินเริ่มต้น: 1000 บาท

เลือกทำรายการ:

1.  ฝากเงิน
2.  ถอนเงิน
3.  ดูยอดเงินคงเหลือ
4.  ออกจากโปรแกรม กรุณาเลือก (1-4): 1 ป้อนจำนวนเงินที่ต้องการฝาก: 500 ฝากเงินสำเร็จ: +500 บาท ยอดเงินปัจจุบัน: 1500 บาท

เลือกทำรายการ:

1.  ฝากเงิน
2.  ถอนเงิน
3.  ดูยอดเงินคงเหลือ
4.  ออกจากโปรแกรม กรุณาเลือก (1-4): 2 ป้อนจำนวนเงินที่ต้องการถอน: 200 ถอนเงินสำเร็จ: - 200 บาท ยอดเงินปัจจุบัน: 1300 บาท

เลือกทำรายการ:

1.  ฝากเงิน
2.  ถอนเงิน
3.  ดูยอดเงินคงเหลือ
4.  ออกจากโปรแกรม กรุณาเลือก (1-4): 3 ยอดเงินคงเหลือปัจจุบัน: 1300 บาท ยอดเงินปัจจุบัน: 1300 บาท

เลือกทำรายการ:

1.  ฝากเงิน
2.  ถอนเงิน
3.  ดูยอดเงินคงเหลือ
4.  ออกจากโปรแกรม กรุณาเลือก (1-4): 4 ขอบคุณที่ใช้บริการครับ/ค่ะ. ยอดเงินปัจจุบัน: 1300 บาท

<!-- end list -->

```

### โค้ดโดยย่อ 🧑‍💻

```c
#include <stdio.h> // input/output

int balance = 1000; // Global variable สำหรับเก็บยอดเงินเริ่มต้น 1000 บาท

void deposite(int value); // ฟังก์ชันฝากเงิน
void withdraw(int amount); // ฟังก์ชันถอนเงิน
int getbalance(); // ฟังก์ชันดูยอดเงินคงเหลือ
void clearInputBuffer(); // ฟังก์ชันสำหรับเคลียร์ input buffer

int main() {
    int choice;
    int amount;

    printf("--- ระบบบัญชีธนาคารอย่างง่าย ---\n");
    printf("ยอดเงินเริ่มต้น: %d บาท\n", getbalance());

    do {
        // เมนูตัวเลือก
        printf("\nเลือกทำรายการ:\n");
        printf("1. ฝากเงิน\n");
        printf("2. ถอนเงิน\n");
        printf("3. ดูยอดเงินคงเหลือ\n");
        printf("4. ออกจากโปรแกรม\n");
        printf("กรุณาเลือก (1-4): ");
        scanf("%d", &choice);
        clearInputBuffer(); // เคลียร์ buffer หลัง scanf

        switch (choice) { // รายละเอียดแต่ละตัวเลือก
            case 1: // ฝากเงิน
                printf("ป้อนจำนวนเงินที่ต้องการฝาก: ");
                scanf("%d", &amount);
                clearInputBuffer();
                deposite(amount);
                break;
            case 2: // ถอนเงิน
                printf("ป้อนจำนวนเงินที่ต้องการถอน: ");
                scanf("%d", &amount);
                clearInputBuffer();
                withdraw(amount);
                break;
            case 3: // ดูยอดเงิน
                printf("ยอดเงินคงเหลือปัจจุบัน: %d บาท\\n", getbalance());
                break;
            case 4: // ออกจากโปรแกรม
                printf("ขอบคุณที่ใช้บริการครับ/ค่ะ.\\n");
                break;
            default: // กรอกไม่ถูก
                printf("ตัวเลือกไม่ถูกต้อง กรุณาลองใหม่.\\n");
                break;
        }
        printf("ยอดเงินปัจจุบัน: %d บาท\\n", getbalance());

    } while (choice != 4); // วนซ้ำจนกว่าผู้ใช้จะเลือกออกจากโปรแกรม

    return 0;
}

// ฟังก์ชันฝากเงิน: เพิ่มเงินเข้า balance หากค่าที่ฝากมากกว่า 0
void deposite(int value) {
    if (value > 0) {
        balance += value;
        printf("ฝากเงินสำเร็จ: +%d บาท\\n", value);
    } else {
        printf("Judy Error: จำนวนเงินฝากต้องมากกว่า 0\\n");
    }
}

// ฟังก์ชันถอนเงิน: หักเงินออกจาก balance หากมีเงินพอและค่าที่ถอนมากกว่า 0
void withdraw(int amount) {
    if (amount > 0) {
        if (amount <= balance) {
            balance -= amount;
            printf("ถอนเงินสำเร็จ: - %d บาท\\n", amount);
        } else {
            printf("Judy Error: ยอดเงินคงเหลือไม่พอสำหรับการถอน\\n", amount);
        }
    } else {
        printf("Judy Error: จำนวนเงินถอนต้องมากกว่า 0\\n");
    }
}

// ฟังก์ชันดูยอดเงินคงเหลือ: คืนค่า balance ปัจจุบัน
int getbalance() {
    return balance;
}

// ฟังก์ชันสำหรับเคลียร์ input buffer
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

```

### การมีส่วนร่วม 🤝

โปรเจกต์นี้มีวัตถุประสงค์เพื่อการเรียนรู้และสาธิต หากคุณมีข้อเสนอแนะในการปรับปรุงโค้ด หรือต้องการเพิ่มคุณสมบัติใหม่ๆ เช่น การบันทึกประวัติการทำรายการ, การจัดการหลายบัญชี, หรือระบบ PIN ยินดีต้อนรับการมีส่วนร่วมของคุณ!

### สิทธิ์การใช้งาน 📜

โปรเจกต์นี้อยู่ภายใต้ [MIT License](https://www.google.com/search?q=LICENSE)

----------

## English 🇬🇧

Welcome to **bank of judy**! 👋 This project is a simple C program 🚀 that simulates a basic banking account system 🏧, allowing users to perform fundamental operations such as **depositing money, withdrawing money and checking their balance** 💰. This program is suitable for beginners who want to learn C programming using functions and global variable management.

### Key Features 🌟

-   **Initial Balance**: The account starts with an initial balance of 1000 Baht.
-   **Deposit**: Allows users to deposit money into the account, with a check to ensure the deposit amount is greater than 0.
-   **Withdraw**: Allows users to withdraw money from the account, with checks to ensure the withdrawal amount is greater than 0 and there are sufficient funds.
-   **Check Balance**: Users can view the current account balance at any time.
-   **Menu System**: Features an interactive menu for users to select various transactions.
-   **Clear Input Buffer**: Includes a function to clear the input buffer to prevent unwanted input issues.

### How to Use 🚀

1.  **Compile the code**: Save the code as `main.c` (or your preferred filename), then use a C compiler (e.g., `gcc`):
    
    Bash
    
    ```
    gcc main.c -o bankofjudy
    
    ```
    
2.  **Run the program**:
    
    Bash
    
    ```
    ./bankofjudy
    
    ```
    
3.  **Perform transactions**: The program will display a menu for you to choose transactions (deposit, withdraw, check balance, exit). Enter a number from 1-4 to proceed.

### Example Program Run 🖥️

```
--- Simple Bank Account System ---
Initial Balance: 1000 Baht

Select an option:
1. Deposit
2. Withdraw
3. View Balance
4. Exit Program
Please select (1-4): 1
Enter amount to deposit: 500
Deposit successful: +500 Baht
Current Balance: 1500 Baht

Select an option:
1. Deposit
2. Withdraw
3. View Balance
4. Exit Program
Please select (1-4): 2
Enter amount to withdraw: 200
Withdrawal successful: - 200 Baht
Current Balance: 1300 Baht

Select an option:
1. Deposit
2. Withdraw
3. View Balance
4. Exit Program
Please select (1-4): 3
Current Balance: 1300 Baht
Current Balance: 1300 Baht

Select an option:
1. Deposit
2. Withdraw
3. View Balance
4. Exit Program
Please select (1-4): 4
Thank you for using our service.
Current Balance: 1300 Baht

```

### Code Overview 🧑‍💻

C

```
#include <stdio.h> // input/output

int balance = 1000; // Global variable for initial balance of 1000 Baht

void deposite(int value); // Deposit function
void withdraw(int amount); // Withdraw function
int getbalance(); // Get balance function
void clearInputBuffer(); // Function to clear input buffer

int main() {
    int choice;
    int amount;

    printf("--- Simple Bank Account System ---\n");
    printf("Initial Balance: %d Baht\n", getbalance());

    do {
        // Menu options
        printf("\nSelect an option:\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. View Balance\n");
        printf("4. Exit Program\n");
        printf("Please select (1-4): ");
        scanf("%d", &choice);
        clearInputBuffer(); // Clear buffer after scanf

        switch (choice) { // Details for each option
            case 1: // Deposit
                printf("Enter amount to deposit: ");
                scanf("%d", &amount);
                clearInputBuffer();
                deposite(amount);
                break;
            case 2: // Withdraw
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);
                clearInputBuffer();
                withdraw(amount);
                break;
            case 3: // View Balance
                printf("Current Balance: %d Baht\\n", getbalance());
                break;
            case 4: // Exit Program
                printf("Thank you for using our service.\\n");
                break;
            default: // Invalid input
                printf("Invalid option. Please try again.\\n");
                break;
        }
        printf("Current Balance: %d Baht\\n", getbalance());

    } while (choice != 4); // Loop until user chooses to exit

    return 0;
}

// Deposit function: Adds money to balance if deposit amount is greater than 0
void deposite(int value) {
    if (value > 0) {
        balance += value;
        printf("Deposit successful: +%d Baht\\n", value);
    } else {
        printf("Judy Error: Deposit amount must be greater than 0\\n");
    }
}

// Withdraw function: Deducts money from balance if funds are sufficient and withdrawal amount is greater than 0
void withdraw(int amount) {
    if (amount > 0) {
        if (amount <= balance) {
            balance -= amount;
            printf("Withdrawal successful: - %d Baht\\n", amount);
        } else {
            printf("Judy Error: Insufficient balance for withdrawal\\n", amount);
        }
    } else {
        printf("Judy Error: Withdrawal amount must be greater than 0\\n");
    }
}

// Get balance function: Returns the current balance
int getbalance() {
    return balance;
}

// Function to clear input buffer
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

```

### Contribution 🤝

This project is intended for learning and demonstration purposes. If you have suggestions for code improvements or wish to add new features such as transaction history, managing multiple accounts, or a PIN system, your contributions are welcome!

### License 📜

This project is licensed under the [MIT License](https://www.google.com/search?q=LICENSE)