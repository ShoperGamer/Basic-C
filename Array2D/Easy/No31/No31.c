#include <stdio.h>

void matrixadd(int arraya[2][2],int arrayb[2][2],int arrayc[2][2]){
  int i,j;
      
	  for(i=0; i<2; i++){
      	for(j=0; j<2; j++)
      	arrayc[i][j] = arraya[i][j] + arrayb[i][j];
	  }	
}

int main(){
	int arraya[2][2];
	int arrayb[2][2];
	int arrayc[2][2];
	int i,j;
	
	//Array A
	printf("---------------Enter to input array A(2x2)---------------\n");
	for(i = 0; i<2; i++){
		for(j= 0; j<2; j++){
		printf("Input Array A[%d][%d]:",i,j);
		scanf("%d",&arraya[i][j]);
		};	
	};
	
	//Array B
	printf("---------------Enter to input array B(2x2)---------------\n");
	for(i = 0; i<2; i++){
		for(j= 0; j<2; j++){
		printf("Input Array B[%d][%d]:",i,j);
		scanf("%d",&arrayb[i][j]);
		};	
	};
	
	matrixadd(arraya,arrayb,arrayc);
	
	//Total
	printf("---------------Total Array (2x2)---------------\n");
	
	printf("Matrix A:\n");
	for(i = 0; i<2; i++){
		for(j= 0; j<2; j++){
		printf("%d ",arraya[i][j]);
		};	
		printf("\n");
	};
	
	printf("Matrix B:\n");
	for(i = 0; i<2; i++){
		for(j= 0; j<2; j++){
		printf("%d ",arrayb[i][j]);
		};	
		printf("\n");
	};
	
	printf("Matrix C (A+B):\n");
	for(i = 0; i<2; i++){
		for(j= 0; j<2; j++){
		printf("%d ",arrayc[i][j]);
		};	
		printf("\n");
	};
	return 0;
}
