#include <stdio.h>

int main() {
	float n[7];
	int i;
	
	printf("------ input 7 Number-------\n");
	
	for(i=0; i<7; i++){
	printf("input Number %d : ",i+1);
	scanf("%f",&n[i]);	
	}
	
	printf("Last element: %.2f",n[6]);
    
    return 0;
}
