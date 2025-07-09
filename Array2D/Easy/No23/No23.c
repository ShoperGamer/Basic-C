#include <stdio.h>

int main() {
	int original[2][3] = {{1, 2, 3}, {4, 5, 6}};
	int transpose[3][2];
	int i,j;
	
    //Transposed Matrix
    for(i=0; i<2; i++){
    	for(j=0; j<3; j++){
    	transpose[j][i] = original[i][j];
		}
	}
	
	printf("Transposed Matrix:\n");
	for(i=0; i<3; i++){
    	for(j=0; j<2; j++){
    	printf("%d ",transpose[i][j]);
		}
		printf("\n");
	}
	
    return 0;
}
