#include <stdio.h>

void printNTimes(char message[],int times){
     int i;
	 
	 for(i=0; i < times; i++){
        printf("%s\n",message);
	 }
}

int main() {
    char message[100];
    int times;
    
    printf("Enter message: ");
    scanf("%s", message); 
    
    printf("Input times: ");
    scanf("%d",&times);
    
    printNTimes(message,times);
    
    return 0;
}
