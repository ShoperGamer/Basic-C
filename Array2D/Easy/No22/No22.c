#include <stdio.h>

int main() {
	int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int d[2][2];
    int i,j;
    
    printf("Difference Matrix:\n");
    for(i=0; i<2; i++){
    	for(j=0; j<2; j++){
    		d[i][j] = a[i][j] - b[i][j];
    		printf("%d ",d[i][j]);
		}
		printf("\n");
	}
    return 0;
}
