#include <stdio.h>

int main(){
	int menu;
	
	printf("Enter your choice (1-3): ");
	scanf("%d",&menu);
	
	switch(menu){
		case '1' : printf("Coffee"); break;
		case '2' : printf("Tea"); break;
		case '3' : printf("Juice"); break;
		default : printf( "Invalid choice!");
	}
	return 0;
}
