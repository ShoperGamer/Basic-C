#include <stdio.h>

#define MAXFLOOR 4 // 0 - 3
#define MAXDAY 7  // 0 - 6

void moreenegry(int energy_usage[MAXFLOOR][MAXDAY]);
int main() {
    int energy_usage[MAXFLOOR][MAXDAY];
    int i,j;
    
    for(i=0; i<MAXFLOOR; i++){
    	printf("------------- Floor %d ----------------\n",i+1);
    	for(j=0; j<MAXDAY; j++){
    		
    		do{
    			printf("Day %d =  ",j+1);
    		    scanf("%d",&energy_usage[i][j]);
    		    while(getchar() != '\n');
    		
    		  if(energy_usage[i][j] <= 0){
    		  	printf("energy error\n Try Again");
			  }
			}while(energy_usage[i][j] <= 0);
    		
	     }
	}
	
	moreenegry(energy_usage);

    return 0;
}

void moreenegry(int energy_usage[MAXFLOOR][MAXDAY]){
  int i,j;    			  
  
		for(i=0; i<MAXFLOOR; i++){
		int totalenegry = 0;
    	printf("------------- Floor %d ----------------\n",i+1);
    	for(j=0; j<MAXDAY; j++){
    	    totalenegry += energy_usage[i][j];
		}
		printf("total week : %d\n", totalenegry);
	
	     if(totalenegry < 450){
		  printf("Under Budget \n");
	      }else if(totalenegry >= 450 && totalenegry <= 550){
		printf("Meets Target \n");
	     }else{
		printf("Over Budget\n");
	   }
	   printf("========================\n");
	}

}
