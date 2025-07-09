#include <stdio.h>

int main() {
    int data[3][3] = {{10, 20, 5}, {30, 15, 40}, {25, 35, 12}};
    int i,j;
	int max = data[0][0];
    
    for(i=0; i<3; i++){
    	for(j=0; j<3; j++){
    		if(data[i][j] > max){
    			max = data[i][j];
			}
		}
	}
	
	printf("Maximum element: %d",max);
	
    return 0;
}
