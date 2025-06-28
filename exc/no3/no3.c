#include <stdio.h>

int main(){
	int score;
	
	printf("input score : ");
	scanf("%d",&score);
	
	if(score < 0 || score >= 100){
		printf("Invalid Score!");
	}else if (score >= 50){
		printf("Pass");
	}else{
		printf("Fail");
	}
	return 0;
}
