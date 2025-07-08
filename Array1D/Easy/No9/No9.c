#include <stdio.h>

int main() {
    long n[10];
    int i;
    
    printf("--------- Input 10 Number ---------------\n");
    for(i=0; i<10; i++){
    	printf("Input Number %d : ",i+1);
    	scanf("%ld",&n[i]);
	}
	printf("First element: %ld",n[0]);
    return 0;
}
