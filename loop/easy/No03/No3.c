#include <stdio.h>

int main(){
	int n;
	printf("Enter a number = ");
	scanf("%d",&n);
	
	//ค่า n เริ่มต้นรับจากผู้ใช้ แล้วลูปลดค่าไปเรื่อยจนเหลือ 1
	for(n>= 1; n--){
		printf("%d\n",n);
	}
	return 0;
}
