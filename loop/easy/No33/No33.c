#include <stdio.h>

int main(){
	int n,i,num,min;
	
	printf("Enter how many numbers: ");
	scanf("%d",&n);
	
	if(n <= 0){
    	printf("error"); return 1;
	}
	
	printf("Enter number 1 : ");
    scanf("%d",&min);
	
	for(i=2; i<=n; i++){
	printf("Enter number %d : ",i);
    scanf("%d",&num);
	
	if(num < min){
		min = num;
	 }	
    }
    
    printf("The smallest number is: %d",min);
	
	return 0;
}
