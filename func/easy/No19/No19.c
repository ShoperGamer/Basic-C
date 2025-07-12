#include <stdio.h>

int getMenuChoice();
int main() {
    int judy;
    judy = getMenuChoice();
    
    printf("Your Choice is %d",judy);
    return 0;
}

int getMenuChoice(){
	int n;
	
	printf("------ Menu ---------\n");
	printf("1 ...\n 2 ... \n 3 ... \n");
	printf("input number (1-3): ");
	scanf("%d",&n);
	
	return n;	
}
