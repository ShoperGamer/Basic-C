#include <stdio.h>

int main() {
	int n,judy,total=0;
	
    printf("Enter a number : ");
    scanf("%d",&n);
    
    if(n == 0){
    	total = 1;
	} else{
		judy = n;
		
		while(judy > 0){
      	judy = judy / 10;
      	total++;
    	}
	}

	printf("The Number %d has %d\n",n,total);
    return 0;
}
