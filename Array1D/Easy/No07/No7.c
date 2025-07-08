#include <stdio.h>

int main() {
    char n[6] = { 'H', 'E', 'L', 'L', 'O', '\0' };
    int i = 0;
    
    while (n[i] != '\0'){
    	i++;
	}
    
    printf("Length of string: %d\n",i);
    
    return 0;
}
