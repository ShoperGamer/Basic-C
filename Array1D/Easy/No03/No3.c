#include <stdio.h>

int main() {
    int judy[5] = {10,20,30,40,50},i;
    
    judy[0] = 100;
    printf("Array Output (1-5) : ");
    for(i=0; i<=4; i++ ){
    	printf("  %d",judy[i]);
	}
    
    return 0;
}
