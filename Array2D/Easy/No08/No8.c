#include <stdio.h>

int main() {
    int judy[2][3] = {{1,2,3} , {4,5,6}};
    int i;
     
    printf("First column:\n");
    for(i=0; i<2; i++){
    		printf("%d\n",judy[i][0]);
		}
	
    return 0;
}
