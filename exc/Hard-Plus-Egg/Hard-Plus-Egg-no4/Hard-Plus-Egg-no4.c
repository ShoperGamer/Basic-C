#include <stdio.h>

int main(){
	float money,tax = 0.0;
	
	printf("input money : ");
	scanf("%f",&money);
	
	if(money > 4000000){
		tax += (money - 4000000)*0.35;
		money = 4000000;
	}
	
	if(money >2000000){
	    tax += (money - 2000000)*0.30;
		money = 2000000;
	}
	
	if(money >1000000){
		tax += (money - 1000000)*0.25;
		money = 1000000;
	}
	
	if(money >=750000){
		tax += (money - 750000)*0.20;
		money = 750000;
	}
	
	if(money >500000){
		tax += (money - 500000)*0.15;
		money = 500000;
	}
	
	if(money >300000){
		tax += (money - 300000)*0.10;
		money = 300000;
	}
	
	if(money >150000){
		tax += (money - 150000)*0.05;
	}
	
	if (money < 0) {
        printf("Error: Income cannot be negative.\n");
        return 1;
    }

	printf("total : %.2f ",tax);
	return 0;
}
