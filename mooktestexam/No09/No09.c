#include <stdio.h>

#define MAXEMPLOYEE 5
#define MAXPARAMETER 2

void judyemployee(float employee_data[MAXEMPLOYEE][MAXPARAMETER]
,char* name[]);
int main() {
	float employee_data[MAXEMPLOYEE][MAXPARAMETER];
	char* name[] = {"index"," Completed Projects ","Customer Satisfaction"};
    int i,j;
    
    for(i=0; i<MAXEMPLOYEE; i++){
    	printf("---------- Employee %d -----------\n",i+1);
    	for(j=0; j<MAXPARAMETER; j++){
    		do{
    			if(j == 0){
    				printf("How many complete project : ");
				}else{
					printf("How many Customer Satisfaction : ");
				}
				scanf("%f",&employee_data[i][j]);
				while(getchar() != '\n');
				
				if(employee_data[i][j] < 0 ){
					printf("input incorrect\n Try Again\n");
				}
		         
			}while(employee_data[i][j] < 0 );	
		}
	}
	
	judyemployee(employee_data,name);
    
    return 0;
}


void judyemployee(float employee_data[MAXEMPLOYEE][MAXPARAMETER]
,char* name[]){

int i;
 
 printf("-------------- Total Table -------------------\n");
 printf("%-15s",name[0]);
 printf("%-25s",name[1]);
 printf("%-25s",name[2]);
 printf("\n");
 
 printf("-------------- Total Employee & Product -------------------\n");
 for(i=0; i<MAXEMPLOYEE; i++){
 	printf("%-15d", i+1);
 	printf("%-25.0f",employee_data[i][0]);
 	printf("%-25.1f",employee_data[i][1]);
 	printf("\n");
 }
 printf("------------------------------------------\n");
 
//performain employee
  for(i =0; i<MAXEMPLOYEE; i++){
  	int score = 100;
  		//------------- Completed Projects -------------
  		if(employee_data[i][0] < 3){
  			score -= 10;
  			printf("your project (%.0f) < 3 score -10\n",employee_data[i][0]);
		  }
		  
		//------------ Customer Satisfaction -----------------
		if(employee_data[i][1] < 70){
  			score -= 15;
  			printf("your Customer (%.1f) < 70 score -15\n",employee_data[i][1]);
		  }
		  
	  //Performance Level
	  if(score >= 90){
	  	printf("Excellent\n");
	  }else if(score >= 70 && score < 90){
	  	printf("Good\n");
	  }else{
	  	printf("Needs Improvement\n");
	  }
      printf("\n");
	  }
	  printf("------------------------------------\n");
}
 
 
 

