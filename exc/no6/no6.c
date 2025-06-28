#include <stdio.h>

int main(){
	char status;
	
	printf("Enter status code (P/D/S/C): ");
	scanf("%c",&status);
	
	switch(status){
		case'P': printf("Pending"); break;
		case'D': printf("Delivered"); break;
		case'S': printf("Shipped"); break;
		case'C': printf("Cancelled"); break;
		
		case'p': printf("Pending"); break;
		case'd': printf("Delivered"); break;
		case's': printf("Shipped"); break;
		case'c': printf("Cancelled"); break;
		
		default : printf("Unknown Status");
	}
	return 0;
}
