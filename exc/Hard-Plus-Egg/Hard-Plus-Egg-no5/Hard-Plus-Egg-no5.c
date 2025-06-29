#include <stdio.h>

int main(){
	float money,total;
	
	printf("input money :");
	scanf("%f",&money);
	
	if(money <= 0){
		printf("Error: Invalid amount!"); return 1;
	}else if(money > 2000){
		total += (money - 2000)*0.15;
		total = 2000;
	}else if(money > 1000){
		total += (money - 1000)*0.10;
		total = 1000;
	}else if(money > 500){
		total += (money - 1000)*0.05;
}
	printf("total : %.2f",total);
	return 0;
}
