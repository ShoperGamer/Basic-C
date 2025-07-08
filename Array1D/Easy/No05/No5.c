#include <stdio.h>

int main() {
	int n[4],i;
	
	printf("----------Input 4 Number-----------\n");
	for(i=0; i<4; i++){
	printf("input %d/4 number : ",i+1);
	scanf("%d",&n[i]);
	}
	
	printf("Array elements: ");
	for(i = 0; i < 4; i++){
		printf("%d",n[i]);
	}
    return 0;
}
