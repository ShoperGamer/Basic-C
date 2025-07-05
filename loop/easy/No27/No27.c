#include <stdio.h>

int main() {
	int start,end,i;
	
    printf("Enter start number: ");
    scanf("%d",&start);
    printf("Enter end number: ");
    scanf("%d",&end);
    
    if(start >= end){
    	printf("error"); return 1;
	}
	
	else{
	i = start;
	printf("Numbers divisible by 3: ");
	    for(i; i<=end; i++){
    	    if(i % 3 == 0)
    	    printf(" %d",i);
	    }	
	}
  
    return 0;
}
