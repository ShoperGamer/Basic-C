#include <stdio.h>

void checkEvenOdd(int num){
	if(num % 2 == 0){
		printf("num is even");
	}else{
		printf("num is odd");
    }
}

int main() {
	int num;
	
    printf("Input number : ");
    scanf("%d",&num);
    printf("\n");
    
    checkEvenOdd(num);
    
    return 0;
}
