#include <stdio.h>

int main() {
	int n,end=50;
	
	do{
		printf("\n Enter Number :");
        scanf("%d",&n);
    }while(n != end);
    
	printf("You entered %d! Program ends.\n",n);

    return 0;
}
