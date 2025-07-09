#include <stdio.h>

int main() {
	int matrix[3][2] = {{10, 5}, {20, 15}, {30, 25}};
	int i,j;
	int max = matrix[0][0];
	
	for(j=0; j<2; j++){
		for(i=0; i<3; i++){
			if(matrix[i][j]>max){
				max = matrix[i][j];
			}
	 }
	 printf("Max in column %d:%d\n",i,max);
	 max = matrix[0][0];
	}
	
	
    return 0;
}
