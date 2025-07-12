#include <stdio.h>

float getUserFloat();
int main() {
    float judy;
    judy = getUserFloat();
    
    printf("Your number = %.2f\n",judy);
    
    return 0;
}

float getUserFloat(){
	float n;
	
	printf("input number = ");
	scanf("%f",&n);
	
	return n;
}
