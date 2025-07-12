#include <stdio.h>

void printMyName(char* name[]){
	printf("Hello %s!\n",name);
}

int main() {
	char name[] = "judy";
   printMyName(name);
    return 0;
}
