#include <stdio.h>

int main() {
	int factors[] = {1, 2, 3, 4};
	int size = sizeof(factors)/sizeof(factors[0]);
	int i,n=1;
	
	for(i=0; i<size; i++){
		n *= factors[i];
	}
	
	printf("Product: %d",n);
    return 0;
}
