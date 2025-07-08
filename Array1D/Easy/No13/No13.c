#include <stdio.h>

int main() {
    int data[6] = {15, 8, 23, 7, 40, 12};
    int max = 15,i;
    
    for(i=1; i< 6; i++){
    	if(data[i]>max){
    		max = data[i];
		}
	}
    printf("Maximum element: %d ",max);
    
    return 0;
    
}
