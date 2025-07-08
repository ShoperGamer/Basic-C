#include <stdio.h>

int main() {
	int sorted_arr[] = {1, 3, 5, 7, 9};
	int size1 = sizeof(sorted_arr)/sizeof(sorted_arr[0]);
	int unsorted_arr[] = {1, 5, 3, 7};
	int size2 = sizeof(unsorted_arr)/sizeof(unsorted_arr[0]);
	int i,n=1,m=1;
	
	printf("sorted_arr: ");
	for(i=0; i<size1-1; i++){
		if(sorted_arr[i] > sorted_arr[i+1]){
         n = 0; break;
		}
	}
	
    if(n == 1){
    	 printf("Is sorted\n");
	}else{
		printf("Is not sorted\n");
	}

	
	printf("unsorted_arr: ");
	for(i=0; i<size2-1; i++){
		if(unsorted_arr[i] > unsorted_arr[i+1]){
        m = 0; break;
		}
	}
	
	if(m == 1){
    	 printf("Is sorted\n");
	}else{
		printf("Is not sorted\n");
	}
 
    return 0;
}
