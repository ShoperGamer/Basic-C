#include <stdio.h>

int main() {
    int judy[2][3] = {{1,2,3} , {4,5,99}};
    int i,j;
     
    for(i=0; i<2; i++){
    	for(j=0; j<3; j++){
    		printf(" %d",judy[i][j]);
		}
		printf("\n");
	}
    return 0;
}
