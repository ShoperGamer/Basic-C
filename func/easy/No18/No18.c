#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(); 
int main() {
	int i;
	srand(time(NULL)); //Null = random
	
    printf("-------------- Welcome to Random Judy (1-100) ------------------\n");
    
    for(i=1; i<=20; i++){
    	printf("Random %d: %d\n",i,generateRandomNumber());
	}

	return 0;
}

int generateRandomNumber(){
	int randomNumber = (rand() % 100) + 1; //Random 1 - 100
    return randomNumber; 
}
