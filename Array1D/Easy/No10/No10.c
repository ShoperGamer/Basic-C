#include <stdio.h>

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i,n=0;
    
    printf("Elements at even indices: ");
    for(i=0; i<5; i++){
    	printf("%d",arr[n]);
    	n +=2;
		}
	
    return 0;
}
