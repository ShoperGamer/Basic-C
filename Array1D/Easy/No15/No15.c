#include <stdio.h>

int main() {
	int score[6] = {85, 92, 78, 65, 95, 80};
    int i,n=0;
    
    for(i=0; i<8; i++){
    	if(score[i]>=80){
    		n++;
		}
	}
	printf("Number of scores >= 80: %d",n);
    return 0;
}
