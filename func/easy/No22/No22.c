#include <stdio.h>

float calculateAverage(int num1,int num2,int num3);
int main() {
    int num1,num2,num3;
    float judy;
    
    printf("Enter number 1 = ");
    scanf("%d",&num1);
    
    printf("Enter number 2 = ");
    scanf("%d",&num2);
    
    printf("Enter number 3 = ");
    scanf("%d",&num3);
    
    judy = calculateAverage(num1,num2,num3);
    printf("Avenger is %.2f",judy);
    return 0;
}

float calculateAverage(int num1,int num2,int num3){
	float sum,avg;
	sum = num1 + num2 + num3;
	avg = sum / 3;
	return avg;
}
