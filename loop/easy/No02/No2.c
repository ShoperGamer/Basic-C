#include <stdio.h>

int main(){
	int n,i=1;
	
	printf("Enter a Number = ");
	scanf("%d",&n);
	
	//ลูปจาก 1 จนถึงค่าที่ผู้ใช้กำหนด
	for(i; i<=n;i++){
		printf("%d\n",i);
	}
	return 0;
}
