#include <stdio.h>

int main() {
    int data[6] = {15, 8, 23, 7, 40, 12};
    int min = 15,i;
    
    for(i=1; i< 6; i++){
    	if(data[i]<min){
    		min = data[i];
		}
	}
    printf("Minimum element: %d ",min);
    
    return 0;
    
}
