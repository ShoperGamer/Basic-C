#include <stdio.h>

int main() {
	int n;
	
	do{
		printf("--- Menu ---\n");
		printf("1. Say Hello\n");
		printf("2. Say Goodbye\n");
		printf("3. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&n);
		
		if(n == 1){
			printf("Hello \n");
		}else if(n == 2){
			printf("Goodbye\n");
		}
				
	}while(n != 3);
	
	printf("Exiting program");
    
    return 0;
}
