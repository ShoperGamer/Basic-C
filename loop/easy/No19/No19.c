#include <stdio.h>

int main() {
    int n,i,total=0;
    
    printf("Enter an upper limit: ");
    scanf("%d",&n);
    
    for(i=1; i<=n; i+= 2){
           total += i;
	}
	printf("Sum of odd numbers up to %d = %d",n,total);
    return 0;
}
