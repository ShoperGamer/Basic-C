#include <stdio.h>

int main() {
	int grid[2][2] = {{10, 20}, {30, 40}};
	int search_val = 30;
	int i,j;
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			if(grid[i][j] == search_val){
				printf("%d found in the array",search_val);
				return 1;
			}
		}	
	}
	printf("%d Not found in the array",search_val);	
    return 0;
}
