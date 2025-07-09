#include <stdio.h>

int main() {
    int data[3][3] = {{10, 20, 5}, {30, 15, 40}, {25, 35, 12}};
    int i,j;
	int min = data[0][0];
    
    for(i=0; i<3; i++){
    	for(j=0; j<3; j++){
    		if(data[i][j] < min){
    			min = data[i][j];
			}
		}
	}
	
	printf("Minimum element: %d",min);
	
    return 0;
}
