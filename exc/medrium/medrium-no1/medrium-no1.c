#include <stdio.h>

int main(){
	float amount,money,total;
	char member;
	
	printf("input amount : ");
	scanf("%f",&amount);
	
	printf("member (m/n): ");
	scanf(" %c",&member);

money = amount;

//amount	
	if(amount <= 0){
		printf("Error: Invalid purchase amount!\n");return 1;	
	}else if(amount > 3000){
		money = amount * (1.00 - 0.10);
	}else if(amount > 1000){
		money = amount * (1.00 - 0.05);
	}

//member	
    if(member == 'M'||member == 'm'||member == 'N'||member == 'n'){
    	if(member == 'M'||member == 'm'){
    	money *= (1.00 - 0.02);
	}
	}else{
		printf("Error: Invalid member status!\n");return 1;
	}

//Shipping Fee
	if(money < 500){
		money += 50.0;
	}

//total
	total = money;
	printf("total : %.2f",total);
	return 0;
}
