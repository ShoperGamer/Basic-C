#include <stdio.h>

int getUserNumber(int n){
	printf("input number : ");
	scanf("%d",&n);
	return n;
}

int main() {
	int n;
	int judy = getUserNumber(n);
	
    printf("your number is %d\n",judy);
    return 0;
}
