#include <stdio.h>

int main() {
	int n,i,j;
	
    printf("Input Number : ");
    scanf("%d",&n);
    
    if(n <= 0){
    	printf("error\n");return 1;
	}
	
	else{
		for(i=1; i<=n; i++){
			for(j=1; j<=i; j++){
				printf("*");
			}
			printf("\n");
		}
	}
    return 0;
}
