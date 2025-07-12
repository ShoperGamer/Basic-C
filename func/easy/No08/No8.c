#include <stdio.h>

void printMax(int num1,int num2){
	if(num1 < num2){
		num1 = num2;
	}
	printf("MAX number = %d",num1);
	
}

int main() {
    int num1,num2;
    
    printf("Input num 1 = ");
    scanf("%d",&num1);
    
    printf("Input num 2 = ");
    scanf("%d",&num2);
    
    printMax(num1,num2);
    return 0;
}
