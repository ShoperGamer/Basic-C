#include <stdio.h>

int main(){
	float net,money=0.0,total;
	
	printf("input net : ");
	scanf("%f",&net);
	
	if(net <= 0){
		printf("Error: Invalid data usage!\n"); return 1;
	}
	
	if(net > 1000){
		money += (net - 1000)*0.25;
		net = 1000;
	}
	
	if(net > 500){
		money += (net - 500)*0.50;
		net = 500;
	}
	
	if(net > 100){
		money += (net - 100)*0.75;
		net = 100;
	}
	
	if(net >= 1){
		money += net*1.00;
	}
	
	total = money + 99;
	printf("total : %.2f",total);
	return 0;
}
