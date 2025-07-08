#include <stdio.h>

int main() {
	int data[] = {10, 25, 30, 45, 50, 55};
    int datasize = sizeof(data)/sizeof(data[0]);
    int i;
    
    printf("Even numbers: ");
    for (i=0; i<datasize; i++){
    	if(data[i] % 2 == 0){
    		printf(" %d",data[i]);
		}
	}
    return 0;
}
