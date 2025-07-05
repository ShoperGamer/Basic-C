#include <stdio.h>

int main() {
	int a,b,i,count=0;
	
    printf("Enter first number (A): ");
    scanf("%d",&a);
    printf("Enter second number (B): ");
    scanf("%d",&b);
    
    if (a<b){
    	count = a;
	}else{
		count = b;
	}
	
    for(i=1; i <= count; i++ ){
    	if( a%i == 0 && b%i == 0){
    			printf("\t%d",i);
		}
	}
    return 0;
}
