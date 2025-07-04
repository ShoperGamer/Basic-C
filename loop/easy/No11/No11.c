#include <stdio.h>
#include <string.h>

int main(){
	int i;
   char password[20];
   const char *correct = "password123"; 
   
    //กำหนดให้ใส่รหัสผ่าน 3 ครั้ง
	for(i = 1; i <= 3; i++){
		printf("Enter Password : ");
		scanf("%s",&password);

		//ตรวจสอบรหัสผ่าน
		if(strcmp(password, correct)== 0){
			printf("Login Successful!"); return 1;
		}else{
			printf("Incorrect password.\n");
		}
	}

	//ถ้าเกิน 3 ครั้ง
	if(i > 3){
		printf("Login Failed\n"); return 1;
	}
	return 0;
}
