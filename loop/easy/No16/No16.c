#include <stdio.h>

int main() {
	int n,mama = 12,i,j,total;
	
    printf("Enter your number : ");
    scanf("%d",&n);
    
    	for(i=1; i<=mama; i++){
    	total = n * i;
		printf("%d * %d = %d\n",n,i,total);	
		}
		
    return 0;
}
