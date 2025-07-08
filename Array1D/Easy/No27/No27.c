#include <stdio.h>

int main() {
	int sequential[10];
    int i;
    
    for(i=0; i<10; i++){
    	sequential[i] = i;
	}
	
	for(i=0; i<10; i++){
    	printf(" %d",sequential[i]);
	}
    return 0;
}
