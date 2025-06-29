#include <stdio.h>

int main(){
	float kilo,money=0.0,total;
	
	printf("How far : ");
	scanf("%f",&kilo);
	
	if(kilo <= 0){
		printf("Error: Invalid distance!\n");return 1;
	}
	
	if(kilo > 30){
		money += (kilo - 30)*8.00;
		kilo = 30;
	}
	
	if(kilo > 15){
		money += (kilo - 15)*10.00;
		kilo = 15;
	}
	
	if(kilo > 5){
		money += (kilo - 5)*15.00;
		kilo = 5;
	}
	
	if(kilo => 1){
		money += kilo*20.00;
	}
	
	total = money + 30;
	printf("total : %.2f",total);
	return 0;
}
