#include <stdio.h>

int sumRange(int startNum,int endNum);
int main() {
	int startNum,endNum,judy;
	
    printf("input start : ");
    scanf("%d",&startNum);
    
    printf("input end : ");
    scanf("%d",&endNum);
    
    judy = sumRange(startNum,endNum);
    printf("total = %d",judy);
    return 0;
}

int sumRange(int startNum,int endNum){
	int range,i;
	
	for(i=startNum; i <= endNum; i++ ){
		range += i;
	}
	
	return range;
}
