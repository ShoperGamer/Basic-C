#include <stdio.h>

int main(){
	
	int n,i=2,judy=0;
	
	printf("Enter Limit = ");
	scanf("%d",&n);
	
	while (i <= n){
		judy += i;
		i += 2;
	}
	printf("Sum to %d = %d\n",n,judy);
	return 0;
}
