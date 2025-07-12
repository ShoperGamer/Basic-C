#include <stdio.h>

void displayGrade(int score){
	
	if(score < 0 || score > 100){
	printf("error\n"); 
	}else if(score >= 80){
		printf("Score %d = Grade A",score);
	}else if(score >= 70){
		printf("Score %d = Grade B",score);
	}else if(score >= 60){
		printf("Score %d = Grade C",score);
	}else if(score >= 50){
		printf("Score %d = Grade D",score);
	}else{
		printf("Score %d = Grade F",score);
	}
}

int main() {
	int score;
	
    printf("input your score : ");
    scanf("%d",&score);
    
    displayGrade(score);
    
    return 0;
}
