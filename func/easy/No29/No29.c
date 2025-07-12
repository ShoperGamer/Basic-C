#include <stdio.h>

float calculateElectricityBill(float unitsConsumed,float pricePerUnit);
int main() {
	float unitsConsumed,pricePerUnit,judy;
	
    printf("Input unitsConsumed : ");
    scanf("%f",&unitsConsumed);
    
    printf("Input pricePerUnit : ");
    scanf("%f",&pricePerUnit);
    
    judy = calculateElectricityBill(unitsConsumed,pricePerUnit);
    printf("Bill %.2f * %.2f = %.2f",unitsConsumed,pricePerUnit,judy);
    
    return 0;
}

float calculateElectricityBill(float unitsConsumed,float pricePerUnit){
	float total;
	total = unitsConsumed * pricePerUnit;
	return total;
}
