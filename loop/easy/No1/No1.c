#include <stdio.h>

int main(){
	int x ,standard = 2, i = 1,total = 1;
	
	printf("enter x = ");
	scanf("%d",&x);
	
	//ถ้า 2**0 ให้ = 1
	if(x == 0){
		total = 1;
	}

	//ลูปค่า X จาก 1 จากถึงที่ผู้ใช้กำหนดพร้อมกับคำนวณ
	else{
	for(i; i <= x; i++ ){
		total *= standard;
	}
}
	printf("Answer = %d\n",total);
	return 0;
}
