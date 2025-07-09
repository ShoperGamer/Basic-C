#include <stdio.h>

int main() {
    int source[2][2] = {{1, 2}, {3, 4}};
    int destination[2][2];
    int i,j;
    
    printf("Destination Array:\n");
    for(i=0; i<2; i++){
    	for(j=0; j<2; j++){
    		destination[i][j] = source[i][j];
    		printf("%d ",destination[i][j]);
	}
	printf("\n");
}
    
    return 0;
}
