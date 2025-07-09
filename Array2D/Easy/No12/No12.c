#include <stdio.h>

int main() {
	int number[2][2] = {{1, 2}, {3, 4}};
    int i,j;
	float avg = 0.00,n = 0.00;
    
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
        	n += number[i][j];
        	avg++;
     }
	}
	n /= avg;
	
    printf("Average : %.2f",n);
    return 0;
}
