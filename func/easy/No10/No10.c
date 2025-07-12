#include <stdio.h>

void printMultiplicationTable(int number){
	int i,n=0;
	
	for(i=1; i<=12; i++){
		n = number * i;
		printf("%d * %d = %d\n",number,i,n);
	}
}


int main() {
	int number;
	
	printf("----------- Welcome to Judy Table -------------\n");
    printf("input number : ");
    scanf("%d",&number);
    
    printMultiplicationTable(number);
    return 0;
}
