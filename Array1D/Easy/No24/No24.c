#include <stdio.h>
#include <ctype.h>

int main() {
      char text[] = "Programming is fun!";
      int size = sizeof(text)/sizeof(text[0]);
      int n,judy=0;
      
      for(n = 0; n<size; n++){
      	text[n] = tolower(text[n]);
      	if(text[n] == 'i'){
      		 judy++;
		  }
	  }
	  printf("'i' appears %d times",judy);
      
    return 0;
}
