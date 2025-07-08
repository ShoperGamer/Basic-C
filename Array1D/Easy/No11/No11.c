#include <stdio.h>

int main() {
    int number[5] = {1, 2, 3, 4, 5};
    int i,n=0;
    
    for(i=0; i<5; i++){
    	n += number[i];
	}
	
	printf("Sum: %d ",n);
    return 0;
}
