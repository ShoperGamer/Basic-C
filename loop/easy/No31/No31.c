#include <stdio.h>
#include <string.h> 

#define Max 50

int main() {
    char text[Max + 1];
    int count = 0;
    int i = 0; 

    printf("Enter a word or phrase:");
    fgets(text, sizeof(text), stdin);

    i = 0; 
    while (text[i] != '\0' && text[i] != '\n') {
        i++;
    }
    if (text[i] == '\n') {
        text[i] = '\0';
    }

    i = 0; 

    while(text[i] != '\0'){ 
	  	if(text[i] == 'a'){
    		count++;
		}
        i++;
    }

    printf("The letter 'a' appears %d times.\n", count);

    return 0;
}
