#include <stdio.h>

int main() {
	int matrix[3][2] = {{1, 2}, {3, 4}, {5, 6}};
	int i,j,temp;
	
	//Original
	printf("Original:\n");
	for(i=0; i<3; i++){
    	for(j=0; j<2; j++){	
    		printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	//Change
	for(j=0; j<2; j++){
		temp = matrix[0][j];
		matrix[0][j] = matrix[2][j];
		matrix[2][j] = temp;
	}
	
	//Swapped
	printf("Swapped:\n");
    for(i=0; i<3; i++){
    	for(j=0; j<2; j++){
    		printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
    return 0;
}
