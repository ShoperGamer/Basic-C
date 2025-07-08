#include <stdio.h>

int main() {
    int num[7] = {1, 5, 2, 5, 3, 5, 4};
    int i,target = 5,n=0;
    
    for(i = 0; i < 7; i++){
    	if(num[i] == target){
    		n++;
		}
	}
	printf("Number of %ds: %d ",target,n);
    return 0;
}
