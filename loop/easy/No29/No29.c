#include <stdio.h>

int main() {
	int n;

	do{
		printf("Enter a score (0-100): ");
        scanf("%d",&n);
        if(n < 0 || n > 100){
        	printf("Invalid score. Please enter a score between 0 and 100\n");
		}
	}while(n < 0 || n > 100);
	
	printf("Valid score: %d",n);
     

    return 0;
}
