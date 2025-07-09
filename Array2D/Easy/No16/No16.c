#include <stdio.h>

int main() {
    int data[3][3] = {{10, 20, 5}, {30, 15, 40}, {25, 35, 12}};
    int i,j,n=0; // n = column
    
    for(j=0; j<3; j++){
    	n = 0;
    	for(i=0; i<3; i++){
    		n+= data[i][j];
		}
		printf("Sum of column %d: %d\n",i,n);
	}
	
	
    return 0;
}
