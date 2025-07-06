#include <stdio.h>

int main() {
	int n,i,j,total;
	
    printf("Input number : ");
    scanf("%d",&n);
        
    if(n <= 0){
    	 printf("Error: Please enter a positive number for the side size.\n");
    	 return 1;
	}
	
    else{
    	for(i=1; i<=n; i++){
    		for(j=1; j<=n; j++){
    	if ((i + j) % 2 == 0) { 
         printf("*");         
         } else {             
         printf("#");         
         }
		}
		printf("\n");
	}
}

    return 0;
}
