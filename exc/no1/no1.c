
#include <stdio.h>

int main(){
	
	int year;
	
	printf("input your age : ");
	scanf("%d",&year);
	
	if(year <= 0 || year >= 120){
		printf("Invalid Age!");
	}else if(year < 13){
		printf("You are too young for this movie.");
	}else if(year >=13 && year <= 17){
		printf("You can watch with parental guidance");
	}else{
		printf("You can watch this movie");
	}
	
	return 0;
}
