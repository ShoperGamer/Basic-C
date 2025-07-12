#include <stdio.h>

void printSum(int a, int b){
	int c;
	c = a + b;
	printf("The sum of %d and %d is: %d\n", a, b,c);
}

int main() {
	int a,b,c;
	
    printf("input a = ");
    scanf("%d",&a);
    
    printf("input b = ");
    scanf("%d",&b);
    
    printSum(a,b);
    
    return 0;
}
