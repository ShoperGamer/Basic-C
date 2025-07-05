#include <stdio.h>

int main() {
	int n,i;
	float m,total,avg=0.00;
	
    printf("Enter how many numbers: \n");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
    	printf("Enter number %d : \n",i);
    	scanf("%f",&m);
    	
    	 avg += m;	
	}
	
	total = avg / n;
    printf("Average = %.2f",total);
    return 0;
}
