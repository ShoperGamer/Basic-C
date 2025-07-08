#include <stdio.h>

int main() {
	int num1[] = {1, 5, 10, 3, 7};
	int size1 = sizeof(num1)/sizeof(num1[0]);
	int num2[] = {1, -5, 10};
	int size2 = sizeof(num2)/sizeof(num2[0]);
	int i,n=0,m=0;
	
	//num1
	for(i=0; i<size1; i++){
		if(num1[i]<0){
			n++;
		}
	}
	
	printf("nums: ");
	if(n == 0){
		printf("All positive\n");
	}else{
		printf("Not all positive\n");
	}
	
	
	//num2
	for(i=0; i<size2; i++){
		if(num2[i]<0){
			m++;
			break;
		}
	}
	
	printf("nums2: ");
	if(m == 0){
		printf("All positive\n");
	}else{
		printf("Not all positive\n");
	}
	
	
    return 0;
}
