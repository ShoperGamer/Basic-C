#include <stdio.h>

int main() {
    int n,i,j,k;
	
    printf("Input Number : ");
    scanf("%d",&n);
    
    if(n <= 0){
    	printf("error \n"); return 1;
	}
	
	for(i=1; i<=n; i++){
		
		//TOP
			for(j=1; j<=(n-i); j++){
				printf(" ");
			}
	            for(k=1; k<=(2*i-1); k++){
						printf("*");
					}
						printf("\n");
			}
		
		//Down	
        	#include <stdio.h>

int main() {
    int n,i,j,k;
	
    printf("Input Number : ");
    scanf("%d",&n);
    
    if(n <= 0){
    	printf("error \n"); return 1;
	}
	
	for(i=1; i<=n; i++){
		
		//TOP
			for(j=1; j<=(n-i); j++){
				printf(" ");
			}
	            for(k=1; k<=(2*i-1); k++){
						printf("*");
					}
						printf("\n");
			}
		
		//Down	
        	for(i=n-1; i>=1; i--){
	         for(j=1; j<=(n-i); j++){
				printf(" ");
			}
	          for(k=1; k<=(2*i-1); k++){ 
						printf("*");
					}
				printf("\n");
					}
  
    return 0;
}
  
    return 0;
}
