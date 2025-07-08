#include <stdio.h>

int main() {
    int number[5] = {1, 2, 3, 4, 5};
    int i;
    float avg = 0.00,n = 0.00;
    
    for(i=0; i<5; i++){
    	n += number[i];
	}
    avg = n/i;
	printf("Average : %.1f",avg);
    return 0;
}
