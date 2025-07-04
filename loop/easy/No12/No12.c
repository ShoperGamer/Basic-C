#include <stdio.h>

int main(){
	int i,day;
	float n=0.00,total=0.00,sum=0.00;
	
	printf("Enter number of days: ");
	scanf("%d",&day);
	
	//รับค่าอุณหภูมิ
	for(i = 1; i <= day; i++){
		printf("Enter temperature for day %d : ",i);
		scanf("%f",&n);
		sum+=n; //รวมค่าอุณหภูมิ
	}

	//หาค่าเฉลี่ย
	   total = sum / day;
	   printf("Average Temperature = %.2f",total);
	
	
	
	return 0;
}
