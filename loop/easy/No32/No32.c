#include <stdio.h>

int main() {
	int n,i,num,max;
	
    printf("Enter how many numbers: ");
    scanf("%d",&n);
    
    if(n <= 0){
    	printf("error"); return 1;
	}
	
	printf("Enter number 1 : ");
    scanf("%d",&max);
    
	
    for(i=2; i<=n; i++){
    	printf("Enter number %d:",i);
    	scanf("%d",&num);
    	
    	if(num > max){
    		num = max;
		}
    	
	}
	printf("The largest number is: %d",max);
    return 0;
}
