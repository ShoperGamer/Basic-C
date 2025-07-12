#include <stdio.h>

void calculateAndPrintCircleArea(float radius){
	float pi = 3.14159;
	float total;
	
	total = pi*(radius*radius);
	printf("total Circle = %.2f",total);
}

int main() {
	float radius;
	
    printf("input radius : ");
    scanf("%f",&radius);
    printf("\n");
    
    calculateAndPrintCircleArea(radius);
    
    return 0;
}
