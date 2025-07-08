#include <stdio.h>

int main() {
    int list[5] = {10, 20, 30, 40, 50};
    int search_val,i,judy=0;
    
    printf("Input number to search : ");
    scanf("%d",&search_val);
    
    for(i = 0; i <5; i++){
    	if(list[i] == search_val){
    	  printf(" Index of %d : %d",search_val,i);
    	  judy = 1;
    	  break;
		}
	 }
	if (judy == 0){
     	printf("Index of %d : -1 ",search_val);
		 }
		 
    return 0;
}
