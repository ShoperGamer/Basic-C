#include <stdio.h>

int main() {
	int n,reved=0,total;
	
    printf("Enter a number: ");
    scanf("%d",&n);
    
    printf("Reversed number: ");
    
    if(n == 0){
    	printf("0\n");
	}else{
		while(n != 0){
         total = n % 10;
         reved = reved * 10 + total;
         
         n = n/10;
	}
	printf("%d\n",reved);
	}

    
    return 0;
}
