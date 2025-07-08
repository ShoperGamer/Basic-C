#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); //find size of array
    int i,left = 0,right = size - 1,temp;
    
    while(left < right){
    	temp = arr[left];
    	arr[left] = arr[right];
    	arr[right] = temp; //temp = left
    	
    	left++;
    	right--;
	}
    
    printf("Reversed Array: ");
    for(i=0;i<size;i++){
    	printf(" %d",arr[i]);
	}
    return 0;
}
