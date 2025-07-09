#include <stdio.h>

int main() {
    int judy[2][2];
    int i,j,n;
    
  for(i=0; i<2; i++){
    	for(j=0; j<2; j++){
    		printf("Enter element at [%d][%d] : ",i,j);
    		scanf("%d",&judy[i][j]);
		}
	}
    
    printf("Array elements:\n");
    for(i=0; i<2; i++){
    	for(j=0; j<2; j++){
    		printf("%d ",judy[i][j]);
		}
		printf("\n");
	}
    
    return 0;
}
