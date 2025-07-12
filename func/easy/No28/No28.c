#include <stdio.h>

char getStringLength(char str[]);
int main() {
	char input[100];
	int judy;
	
    printf("Input inbox: ");
    scanf("%s",&input);
    
    judy = getStringLength(input);
    printf("your string is %d char",judy);
    
    return 0;
}

//ถ้าเว้นวรรคจะไม่นับต่อ
char getStringLength(char str[]){
	int i=0,n=0;
	 
	 while (str[i] != '\0'){
	 	n++;
	 	i++;
	 }
	 
	 return n;
}
