#include <stdio.h>

int main(){
	float num1,total,num2;
	char judy;
	printf("Enter number 1: ");
	scanf("%f",&num1);
	
	printf("Enter operator (+, -, *, /): ");
	scanf(" %c",&judy);
	
	printf("Enter number 2: ");
	scanf("%f",&num2);
	
	switch(judy){
		case'/' : if(num2 == 0 ){
		printf("Error: Division by zero!");
	}else{
		total = num1 / num2; printf("total : %.2f",total); break;
	}
		case'*' : total = num1 * num2; printf("total : %.2f",total); break;
		case'+' : total = num1 + num2; printf("total : %.2f",total); break;
		case'-' : total = num1 - num2; printf("total : %.2f",total); break;
		default : printf("Error: Invalid operator!");
}
	
	
	return 0;
}
