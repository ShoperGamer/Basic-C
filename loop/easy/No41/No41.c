#include <stdio.h>

int main() {
	int n,i,j,k;
	
    printf("Input Number : ");
    scanf("%d",&n);
    
    if(n <= 0){
    	printf("error \n"); return 1;
	}
	
	else{
		for(i=n; i>=1; i--){
	         for(j=1; j<=(n-i); j++){
				printf(" ");
			}
	          for(k=1; k<=(2*i-1); k++){
						printf("*");
					}
				printf("\n");
			}
}
    return 0;
}
