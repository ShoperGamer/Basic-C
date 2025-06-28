#include <stdio.h>

int main(){
	float water;
	
	printf("Enter rainfall (mm):");
	scanf("%f",&water);
	
	if(water < 0 ){
		printf("Error: Negative rainfall!");
	}else if(water >= 0 && water <= 10){
		printf("Light Rain");
	}else if(water >= 10.1 && water <= 50){
		printf("Moderate Rain");
	}else if(water >= 50.1 && water <= 100){
		printf("Heavy Rain");
	}else{
		printf("Extreme Rainfall");
	}
	return 0;
}
