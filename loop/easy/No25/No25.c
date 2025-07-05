#include <stdio.h>

int main() {
	const int correct = 7;
	int n;
	
	do{
		printf("Guess the secret number: ");
		scanf("%d",&n);
		
		if(n != correct){
			printf("Try again\n");
		}
		
	}while (n != correct);
	
	printf("Congratulations! You guessed it!");
    return 0;
}
