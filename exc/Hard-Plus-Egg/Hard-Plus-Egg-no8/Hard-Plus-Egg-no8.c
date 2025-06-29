#include <stdio.h>

int main(){
    float  meter,money=0.0,total;
	
	printf("input meter : ");
	scanf("%f",&meter);
	
	if(meter <=  0){
    	printf("Error: Invalid water usage!\n"); return 1;
	}

	if(meter > 50){
		money += (meter - 50)*10.00;
		meter = 50;
	}
	
	if(meter > 30){
		money += (meter - 30)*9.00;
		meter = 30;
	}
	
	if(meter > 10){
		money += (meter - 10)*7.50;
		meter = 10;
	}
	
	if(meter > 1){
		money += meter * 5.00;
	}
	
	total = money + 20;
	printf("total : %.2f",total);
	
	return 0;
}
