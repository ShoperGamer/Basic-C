#include <stdio.h>

int main() {
	int i,n,m=0;
	int judy[10];
	int size = sizeof(judy)/sizeof(judy[0]);
	
	printf("Enter array size (max 10): ");
	scanf("%d",&n);
	
	if(n > 10){
		printf("\n max 10"); return 1;
	}
	
	for(i=0; i<n; i++){
		printf("Enter %d numbers: ",i+1);
		scanf("%d",&judy[i]);
		m += judy[i];
	}
	
    printf("Sum: %d",m);
    return 0;
}
