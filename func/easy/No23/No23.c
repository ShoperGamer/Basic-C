#include <stdio.h>

int findMax(int x,int y);
int main() {
    int x, y;
    int judy;
    
    printf("Input x : ");
    scanf("%d",&x);
    
    printf("Input y : ");
    scanf("%d",&y);
    
    judy = findMax(x,y);
    printf("Max Number is = %d",judy);
    return 0;
}
int findMax(int x,int y){
	int max;
	if (x < y){
		max = y;
	}else{
		max = x;
	}
	
	return max;
}
