#include <stdio.h>

int main() {
	int swap_arr[] = {10, 20, 30, 40};
	int size = sizeof(swap_arr)/sizeof(swap_arr[0]);
    int temp,i;
    
    // left = swap_arr[0];
    // right = swap_arr[size];
    
    printf("Original: ");
    for(i=0; i<size; i++){
    	printf(" %d",swap_arr[i]);
	}
	printf("\n");
	
	temp = swap_arr[0];
	swap_arr[0] = swap_arr[size - 1];
	swap_arr[size - 1] = temp;
	
	printf("Swapped: ");
    for(i = 0; i < size; i++){
        printf(" %d", swap_arr[i]);
    }
    
    return 0;
}
