#include <stdio.h>

void displayUserProfile(char name[100],int age,float height){
	printf(" hello %s\n Your age is %d\n Your height is %.2f\n",name,age,height);
}

int main() {
    char name[100];
	int age;
	float height;
	
	printf("input name : ");
	scanf("%s",name);
	
	printf("input age : ");
	scanf("%d",&age);
	
	printf("input height : ");
	scanf("%f",&height);
	
	displayUserProfile(name,age,height);
	
    return 0;
}
