#include <stdio.h> // input/output

// Global variable สำหรับเก็บยอดเงิน
int balance = 1000;

// Function prototypes
void deposite(int value);
void withdraw(int amount);
int getbalance();
void clearInputBuffer(); // เพิ่มฟังก์ชันสำหรับเคลียร์ input buffer

int main() {
    int choice;
    int amount;

    printf("--- ระบบบัญชีธนาคารอย่างง่าย ---\n");
    printf("ยอดเงินเริ่มต้น: %d บาท\n", getbalance());

    do {
        printf("\nเลือกทำรายการ:\n");
        printf("1. ฝากเงิน\n");
        printf("2. ถอนเงิน\n");
        printf("3. ดูยอดเงินคงเหลือ\n");
        printf("4. ออกจากโปรแกรม\n");
        printf("กรุณาเลือก (1-4): ");
        scanf("%d", &choice);
        clearInputBuffer(); // เคลียร์ buffer หลัง scanf

        //รายละเอียดแต่ละตัวเลือก
        switch (choice) {
            case 1:
                printf("ป้อนจำนวนเงินที่ต้องการฝาก: ");
                scanf("%d", &amount);
                clearInputBuffer();
                deposite(amount);
                break;
            case 2:
                printf("ป้อนจำนวนเงินที่ต้องการถอน: ");
                scanf("%d", &amount);
                clearInputBuffer();
                withdraw(amount);
                break;
            case 3:
                printf("ยอดเงินคงเหลือปัจจุบัน: %d บาท\n", getbalance());
                break;
            case 4:
                printf("ขอบคุณที่ใช้บริการครับ/ค่ะ.\n");
                break;

            //กรอกข้อมูลไม่ถูก
            default:
                printf("ตัวเลือกไม่ถูกต้อง กรุณาลองใหม่.\n");
                break;
        }
        printf("ยอดเงินปัจจุบัน: %d บาท\n", getbalance());

    } while (choice != 4); // วนซ้ำจนกว่าผู้ใช้จะเลือกออกจากโปรแกรม

    return 0;
}

// ฟังก์ชันฝากเงิน
void deposite(int value) {
    if (value > 0) {
        balance += value;
        printf("ฝากเงินสำเร็จ: +%d บาท\n", value);
    } else {
        printf("Judy Error: จำนวนเงินฝากต้องมากกว่า 0\n");
    }
}

// ฟังก์ชันถอนเงิน
void withdraw(int amount) {
    if (amount > 0) { // ตรวจสอบว่าจำนวนเงินถอนมากกว่า 0

        //มีเงินพอจ่ายไหม
        if (amount <= balance) {
            balance -= amount;
            printf("ถอนเงินสำเร็จ: - %d บาท\n", amount);
        } else {
            printf("Judy Error: ยอดเงินคงเหลือไม่พอสำหรับการถอน\n", amount);
        }
    } else {
        printf("Judy Error: จำนวนเงินถอนต้องมากกว่า 0\n");
    }
}

// ฟังก์ชันดูยอดเงินคงเหลือ
int getbalance() {
    return balance;
}

// ฟังก์ชันสำหรับเคลียร์ input buffer
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
