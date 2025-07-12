#include <stdio.h>

char getUserCharacter(); 
int main() {
	char n;
	n = getUserCharacter();
	printf("Your Char is %c",n);
}

char getUserCharacter(){
	char charyen;
	printf("Input Char : ");
	scanf(" %c",&charyen);
	
	return charyen;
}

