#include <stdio.h>

int main() {
	int number[2][2] = {{1, 2}, {3, 4}};
    int i,j,n=0;
    
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
        	n += number[i][j];
     }
	}
    printf("Sum : %d",n);
    return 0;
}
