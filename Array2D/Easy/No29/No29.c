#include <stdio.h>

int main() {
    int sequential[3][3];
    int i,j,n=0;
    
    for(i=0; i<3; i++){
    	for(j=0; j<3; j++){
    		sequential[i][j] = n+1;
    		++n;
    	    printf("%d ",sequential[i][j]); 	
		}
      printf("\n");
	}
    return 0;
}
