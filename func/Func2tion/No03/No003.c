#include <stdio.h>

#define NUMEMPLOYEES 2
#define MAXday 7

void input_daily_sales(int data[NUMEMPLOYEES][MAXday]);
void display_and_summarize_sales(int data[][MAXday]);

int main() {
    int data[NUMEMPLOYEES][MAXday];
    
    printf("------------ Input sales --------------\n");
    input_daily_sales(data);
	printf("------------ Total sales --------------\n");
	display_and_summarize_sales(data);
	
	printf("----------- Thank You ---------------\n");
    
    return 0;
}

void input_daily_sales(int data[NUMEMPLOYEES][MAXday]){
	int i,j;
	int test;
	
	for(i=0; i<NUMEMPLOYEES; i++){
		printf("---------- NUMEMPLOYEES %d -----------\n ",i+1);
		for(j=0; j<MAXday; j++){
		do{
			printf("Day sales %d : ",j+1);
			scanf("%d",&test);
			while (getchar() != '\n');
			
			if(test < 0){
				printf("error Try Again\n");
			}
		
		}while(test<0);
		   data[i][j] = test;
        }      
	}
	printf("---------------------------------\n");
}


void display_and_summarize_sales
(int data[NUMEMPLOYEES][MAXday]){
	int i,j,n=0;
	int employsales;
	int toadaysales;
	
	char* day[] = {"mon","tue","wen","thus","fri","sat","sun"};
	
		printf("\t toadaysales\n");
		for(j=0; j<MAXday; j++){
		printf("%-5s",day[j]);	
		}
		printf("\n");
		
	    for(i=0; i<NUMEMPLOYEES; i++){
		printf("Emploayee %d",i+1);
		for(j=0; j<MAXday; j++){
		    printf("\t%-5d",data[i][j]);	
		}	
     printf("\n");
	}
	
	printf("---------- Per Employee -----------\n ");
	for(i=0; i< NUMEMPLOYEES; i++){
		employsales = 0;
		for(j=0; j<MAXday; j++){
		employsales += data[i][j];
		}	
		printf("Employ %d Total %d\n",i+1,employsales);
	}		

    printf("---------- Per Days -----------\n ");
      for (j = 0; j < MAXday; j++) {
      	 toadaysales = 0;
      	for (i = 0; i < NUMEMPLOYEES; i++) {
      		 toadaysales += data[i][j];
      	}
      	printf("Day %s :  total %d bath\n", day[j], toadaysales);
      }
      	
}    


