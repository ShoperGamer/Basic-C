#include <stdio.h>

int main(){
	int temp;
	float hum;
	
	printf ("input temp : ");
	scanf("%d",&temp);
	
	printf ("input hum ; ");
	scanf("%f",&hum);
	
	if(temp < 15){
		if(hum < 40){
			printf("Stay Indoors");
		}else if(hum >= 40 && hum <= 70){
			printf("Warm Clothes Needed");
		}else{
			printf("Frostbite Risk");
		}
	}
	
	else if(temp >= 15 && temp <= 25){
		if(hum < 40){
			printf("Perfect Weather");
		}else if(hum >= 40 && hum <= 70){
			printf("Go for a walk");
		}else{
			printf("Slightly Humid");
		}
	}
	
	else if(temp > 25){
		if(hum < 40){
			printf("Sunny Day");
		}else if(hum >= 40 && hum <= 70){
			printf("Sweaty Day");
		}else{
			printf("Heat Stroke Alert");
		}
	}
	
	return 0;
}
