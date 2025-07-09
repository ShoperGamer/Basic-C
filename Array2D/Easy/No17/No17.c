#include <stdio.h>

int main() {
	int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int i,j,n=0;
    
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
    	if(matrix[i][j] % 2 == 0){
    		n++;
		}
     	}
	}
	printf("Number of even elements: %d",n);
    
    return 0;
}
