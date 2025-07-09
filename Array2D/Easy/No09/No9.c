#include <stdio.h>

int main() {
	int sq_matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i,j,k;
    
    printf("Main Diagonal: ");
    for(i=0; i<3; i++){
    	for(j=0; j<3; j++){
    		 if (i == j) {
    		 printf("%d  ",sq_matrix[i][j]);
    	}
    	}
	}
    
    return 0;
}
