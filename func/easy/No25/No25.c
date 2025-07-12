#include <stdio.h>

float celsiusToFahrenheit(float celsius);
int main() {
	float celsius,judy;
	
    printf("input temp (celsius) =  ");
    scanf("%f",&celsius);
    
    judy = celsiusToFahrenheit(celsius);
    printf("Fahrenheit is %.2f",judy);
    return 0;
}

float celsiusToFahrenheit(float celsius){
	float Fahrenheit;
	Fahrenheit = (celsius * (9.0/5.0)) + 32.0;
	return Fahrenheit;
}
