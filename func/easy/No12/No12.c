#include <stdio.h>

void printSquare(char character,int size){
	int i,j;
	
	for(i=0; i<size; i++){
		for(j=0; j<size; j++){
			printf("%c",character);
		}
		printf("\n");
	}
}

int main() {
	char character;
	int size;
	
    printf("input character : ");
    scanf(" %c",&character);
    printf("\n");
    
    printf("input size : ");
    scanf("%d",&size);
    printf("\n");
    
    printSquare(character,size);
    return 0;
}
