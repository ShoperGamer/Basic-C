#include <stdio.h>

int main(){
	int n,i=1,total=0;
	
	printf("Enter a Number = ");
	scanf("%d",&n);
	
	//รวมค่าโดยใช้เทคนิคแฟกทรอเรียล
	for(i; i<=n; i++){
		total += i;
	}
	printf("Sum 1 to %d = %d ",n,total);
	return 0;
}
