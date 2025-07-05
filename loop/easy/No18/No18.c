#include <stdio.h>

int main() {
	int n;
	
	
	do{
		printf("Enter a positive number: \n");
		scanf("%d",&n);
	}while(n <= 0);
	
	printf("Valid input: %d ",n);
    return 0;
}
