#include <stdio.h>

int isPositive(int number);
int main() {
	int number,judy;
	
    printf("Input number : ");
    scanf("%d",&number);
    
    judy = isPositive(number);
    printf("status your number is %d",judy);
    return 0;
}

int isPositive(int number){
	int n;
	
	if(number < 0){
		n = 0;
	}else{
		n = 1;
	}
	
	return n;
}
