#include <stdio.h>

int multiply(int val1,int val2);
int main() {
	int val1,val2,judy;
	
    printf("input val1 : ");
    scanf("%d",&val1);
    
    printf("input val2 : ");
    scanf("%d",&val2);
    
    judy = multiply(val1,val2);
    printf("total %d * %d = %d",val1,val2,judy);
    
    return 0;
}

int multiply(int val1,int val2){
	int total;
	total = val1 * val2;
	return total;
}
