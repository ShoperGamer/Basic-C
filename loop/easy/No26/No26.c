#include <stdio.h>

int main() {
	int n,i=1;
	
    printf("Enter a number: ");
    scanf("%d",&n);
    
    while(i <= n){
    	printf("* ");
    	i++;
	}
    
    return 0;
}
