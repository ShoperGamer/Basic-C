#include <stdio.h>

int main(){
	int n,i,m,even=0,odd=0;
	
	printf("Enter how many numbers: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
	    printf("Enter number %d:",i);
	    scanf("%d",&m);
	    
	    if(m % 2 == 0){
	    	even++;
		}else{
	    	odd++;
		}
	}
	printf("Even numbers: %d\n",even);
	printf("Odd numbers: %d",odd);
	
	return 0;
}
