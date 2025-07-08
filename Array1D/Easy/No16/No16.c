#include <stdio.h>

int main() {
    int list[5] = {10, 20, 30, 40, 50};
    int search_val = 30,i,judy=0;
    
    for(i = 0; i <5; i++){
    	if(list[i] == search_val){
    	  printf("%d found in the array",search_val);
    	  judy = 1;
    	  break;
		}
	 }
	if (judy == 0){
     	printf("%d Not found in array\n",search_val);
		 }
		 
    return 0;
}
