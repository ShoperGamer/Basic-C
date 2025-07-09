#include <stdio.h>

int main() {
	float judy[3][2] = {{1.1, 1.2}, {2.1, 2.2}, {3.1, 3.2}};
	int i,j;
	
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			printf("%.1f ",judy[i][j]);
		}
		printf("\n");
	}
	
    return 0;
}
