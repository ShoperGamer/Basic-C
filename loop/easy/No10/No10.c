#include <stdio.h>

int main(){
	int count,i,sum;
	float number=0.00, total=0.00;
	
	printf("Enter how many numbers: ");
	scanf("%d",&count);
	
	for(i=1; i<=count; i++){
		printf("Enter number %d : ",i);
		scanf("%f",&number);
		sum+=number;		
	}
	     total = sum / count;
		printf("Average = %.2f",total);
	return 0;
}
