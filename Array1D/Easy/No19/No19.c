#include <stdio.h>

int main() {
    int source[5] = {1, 2, 3, 4, 5};
    int i,destination[5];
    
    for(i = 0; i <5; i++){
    	destination[i] = source[i]; 
	}
	
	printf("Destination Array: ");
	for(i = 0; i <5; i++){
		printf("  %d",destination[i]);
	}
    return 0;
}
