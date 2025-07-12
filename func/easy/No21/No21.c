#include <stdio.h>

int add(int a,int b);
int main() {
	int a,b,judy;
	
	printf("input number a : ");
    scanf("%d",&a);
    
    printf("input number b : ");
    scanf("%d",&b);
    
    judy = add(a,b);
    
    printf("Total %d + %d = %d",a,b,judy);
    
    return 0;
}

int add(int a,int b){
	int c;
	
	c = a + b;
	
	return c;
}
