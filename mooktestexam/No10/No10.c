#include <stdio.h>

#define MAXSEATS 6
#define MAXTOTAL (MAXSEATS*MAXSEATS)

void superwhile (int seats[MAXSEATS][MAXSEATS]);
int main() {
    int seats[MAXSEATS][MAXSEATS];
    int i,j,n=0;
    int row,col;
    
    //Start = 0
    for(i=0; i<MAXSEATS; i++){
    	for(j=0; j<MAXSEATS; j++){
    		seats[i][j] = 0;
		}
	}
	
	//input Number of occupied seats
    do{
    	printf("input Number of occupied seats (0-%d) : ",MAXTOTAL);
    	scanf("%d",&n);
    	while (getchar() != '\n');
    	
    	if(n < 0 || n > MAXTOTAL){
    		printf("Number Incorrect \n Try Again \n");
		}
	}while(n < 0 || n > MAXTOTAL );
	
	//chair
	int k;
	for(k=0; k<n; k++){
		printf("--------- Chair %d ------------\n",k+1);
		do{
			printf("row chair (0-%d): ",MAXSEATS-1);
			scanf("%d",&row);
			while(getchar() != '\n');
			
			printf("col chair (0-%d): ",MAXSEATS-1);
			scanf("%d",&col);
			while(getchar() != '\n');
			
			if(row <0 || row >= MAXSEATS || col <0 || col >= MAXSEATS ){
				printf("Chair incorrect\n Try Again \n");
			}else if(seats[row][col] == 1){
				printf("Too slow Someone select (%d , %d) \n Please new Chair \n",row,col);
			}
		}while(row <0 || row >= MAXSEATS || col <0 
		|| col >= MAXSEATS ||  seats[row][col] == 1);
		
			seats[row][col] = 1;
	        printf("Select %d %d compileted\n",row,col);
	        printf("\n");
	}
	
	printf("-------------------------------\n");
	superwhile (seats);
    return 0;
}

//Check
void superwhile (int seats[MAXSEATS][MAXSEATS]){
	int col,row;
	
	//Input & Check Input
	while(1){
		printf("check rows (0-%d exit -1) : ",MAXSEATS-1);
		scanf("%d",&row);
		while(getchar() != '\n');
		
		if(row == -1){
			printf("stop \n"); break;
		}
		
		printf("check col (0-%d exit -1) : ",MAXSEATS-1);
		scanf("%d",&col);
		while(getchar() != '\n');
		
		if(col == -1){
			printf("stop \n"); break;
		}
		
		if(row <0 || row >=MAXSEATS || col < 0 || col >= MAXSEATS ){
			printf("check incorrect \n Try Again \n");
			continue;
		}	
		
		//Show Status
		if(seats[row][col] == 1){
			printf("Seat (%d, %d) is Occupied.\n",row,col);
		}else{
			printf("Seat (%d, %d) is Available\n",row,col);
		}
	}
	
}

