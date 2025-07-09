#include <stdio.h>

int main() {
    int number[2][3] = {{1, -2, 3}, {-4, 5, -6}};
    int i,j,n=0;
    
    for(i=0; i<2; i++){
       for(j=0; j<3; j++){
       	if(number[i][j] < 0){
       		n++;
		   }
       }
	}
	printf("Number of negative elements: %d",n);
    return 0;
}
