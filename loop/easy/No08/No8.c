#include <stdio.h>

int main(){
	int n=0 ,i=1,total=0;
	char tea;
	
	printf("Enter number of characters = ");
	scanf("%d",&n);
	
	//รับทีละตัวอักษร
	for(i; i<=n; i++){
		printf("Enter character %d: ",i);
		scanf(" %c",&tea);
		
		//ถ้ามี a ให้เพิ่มค่าที่ total
		if(tea == 'a'){
			total ++;
		}
	}
	
	printf("Number of 'a' is = %d",total);
	
	return 0;
}
