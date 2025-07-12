#include <stdio.h>

float calculateRectangleArea(float length,float width);
int main() {
    float length,width,judy;
    
    printf("Input lenght = ");
    scanf("%f",&length);
    
    printf("Input width = ");
    scanf("%f",&width);
    
    judy = calculateRectangleArea(length,width);
    printf("Total Area = %.2f",judy);
    return 0;
}
float calculateRectangleArea(float length,float width){
	float total;
	
	total = length * width;
	return total;
}
