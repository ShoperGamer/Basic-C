#include <stdio.h>

#define MAXLINE 3
#define MAXHOUR 8

void DailyTarget(int n);
int main() {
	int production_data[MAXLINE][MAXHOUR];
    int i,j;
    
    for(i=0; i<MAXLINE; i++){
    	printf("----- Line %d -----------\n",i);
    	for(j=0; j<MAXHOUR; j++){
    		do{
    		printf("hour %d Input value : ",j+1);
    		scanf("%d",&production_data[i][j]);;
    		while (getchar() != '\n');
     
			  if(production_data[i][j] < 0){
			  	printf("error \n Try Again");
			  }	
			}while(production_data[i][j] < 0);
			}
		}
		printf("\n");
	
	for(i=0; i<MAXLINE; i++){
		int totalline=0;
		printf("----- Total Line %d -----------\n",i);
		for(j=0; j<MAXHOUR; j++){
            totalline += production_data[i][j];
		}
		printf("total %d\n",totalline);
		DailyTarget(totalline);
	}
	
    return 0;
}

void DailyTarget(int n){
	if(n < 800){
		printf("Below Target\n");
	}else if(n == 800){
		printf("Meets Target\n");
	}else{
	    printf("Exceeds Target\n");	
	}	
}
