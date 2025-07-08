#include <stdio.h>

int main(){
	
	int mama = 7, i = 1,total = 0;
	
	//ลูปตั้งแต่ 7*1 จนถึง 7*12
	for(i; i <= 12; i++){
		total = 7 * i ;
		printf("7 * %d = %d\n",i,total);
	}
	return 0;
}
