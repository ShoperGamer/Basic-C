#include <stdio.h>

int main (){
	float wat2,wat,total=0.0f;
	
	printf("input wat : ");
	scanf("%f",&wat);
	
	wat2 = wat;
//use wat 
	if(wat < 0){
		printf("Error: Invalid units!"); return 1;
	}
	
	if(wat > 300){
		total += (wat - 300)*4.50f;
		wat = 300;
	}
	
	if(wat > 100){
		total += (wat - 100)*4.00f;
		wat = 100;
	}
	
	if(wat >= 1){
		total += wat * 3.50f;
	}
	
	if(wat2 > 100){
		total += 50.0f;
	}
	printf("total : %.2f",total);
	return 0;
}
