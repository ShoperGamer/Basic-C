#include <stdio.h>

int main() {
	int n;
    printf("Enter a starting number for countdown: ");
    scanf("%d",&n);

    while(n >= 1){
    	printf("%d\n",n);
    	n--;
	}
	
	printf("Happy New Year!");
    return 0;
}
