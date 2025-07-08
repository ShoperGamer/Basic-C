#include <stdio.h>

int main() {
	int n[5],i;
	
	printf("----------Input 5 Number-----------\n");
	for(i=0; i<5; i++){
	printf("input %d/5 number : ",i+1);
	scanf("%d",&n[i]);
	}
	
	printf("Array elements: ");
	for(i=4 ; i>=0; i--){
		printf("%d",n[i]);
	
}
    return 0;
}
