#include <stdio.h>

int main() {
	int n,i;
	
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(i=1; i<=n; i+=2){
    	printf("\t%d",i);
	}
    
    return 0;
}
