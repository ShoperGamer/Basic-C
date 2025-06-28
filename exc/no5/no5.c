#include <stdio.h>

int main(){
	float price,judy,total;
	
	printf("input price : ");
	scanf("%f",&price);
	
	if(price >= 1000){
		judy = price *  0.10;
		total = price - judy;
		printf("total : %f",total);
	}else if(price >= 500 && price < 1000){
		judy = price * 0.05;
		total = price - judy;
		printf("total : %.2f",total);
	}else{
		printf("%f",price);
	}
	
	return 0;
}
