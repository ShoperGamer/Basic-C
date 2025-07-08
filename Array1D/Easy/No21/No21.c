#include <stdio.h>

int main() {
	//size 1 
	int arr1[] = {1, 2, 3};
	int size1 = sizeof(arr1)/ sizeof(arr1[0]);
	//size 2
	int arr2[] = {4, 5};
	int size2 = sizeof(arr2)/ sizeof(arr2[0]);
	//size 3
	int sum[],i;
	int size3 = sizeof(sum)/ sizeof(sum[0]);
    
    for(i=0; i<size1; i++){
    	sum[i] = arr1[i];
	}
	for(i=0; i<size2; i++){
    	sum[i+size1] = arr2[i];
	}
	
	printf(" Total =  ");
	for(i=0; i<size3; i++){
    	printf(" %d",sum[i]);
	}
	   
    return 0;
}
