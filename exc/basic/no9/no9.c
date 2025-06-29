#include <stdio.h>

int main(){
	float hours,total;
	
	printf("Enter parking hours: " );
	scanf("%f",&hours);
	
	if(hours < 0){
		printf("Error: Invalid hours!");
	}else if(hours >= 0 && hours <= 2){
		total = hours * 20;
		printf("price : %.2f",total);		
	}else if(hours > 2 && hours <= 5){
		total = (2* 20)+ ((hours - 2)*15);
		printf("price : %.2f",total);	
    }else{
    	total = (2*20)+ (3*15) + ((hours - 5)*10);
    	printf("price : %.2f",total);	
	}
	return 0;
}
