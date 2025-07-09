#include <stdio.h>

int main() {
	int matrix[3][2] = {{10, 5}, {20, 15}, {30, 25}};
	int i,j;
	float n=0.00,avg=0.00;
	
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			n += matrix[i][j];
			avg++;
			}
			n /= avg;
			printf("Average of row %d: %.2f\n",i,n);
			n=0.00,avg=0.00;
	 }	
    return 0;
}
