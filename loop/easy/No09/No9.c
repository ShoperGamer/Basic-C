#include <stdio.h>

int main(){
	int n,i,j,total=0;
	
	printf("Enter number of rows: ");
	scanf("%d",&n);
	
	//ลูปหลักวิ่งตามค่า n | ลูปย่อยวิ่งตามลูปหลักพร้อมเพิ่มจำนวน *
	for (i=1; i <= n; i++){
	    for (j=1; j<=i; j++){
	     printf("*");
	}
	printf("\n");
	}
	return 0;
}
