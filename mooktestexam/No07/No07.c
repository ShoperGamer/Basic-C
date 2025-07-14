#include <stdio.h>

#define MAXSIZE 5

void progrid (int grid[MAXSIZE][MAXSIZE]);
int main() {
	int grid[MAXSIZE][MAXSIZE];
	int i,j,n;
	int row,col;
	
	//Defaule
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			grid[i][j] = 0;
		}
	}
	
	do{
		printf("Input Number of objects : ");
	    scanf("%d",&n);
	    while(getchar() != '\n');
	    
	    if(n < 0){
	    	printf("Error \n Try Again \n");
		}
	}while(n < 0);
	
	int k;
	for(k=0; k<n; k++){
		printf("--------- Number %d -----------\n",k+1);
		do{
			printf("Input row 0-%d = ",MAXSIZE-1);
			scanf("%d",&row);
			while (getchar() != '\n');
			
			printf("Input col 0-%d = ",MAXSIZE-1);
			scanf("%d",&col);
			while (getchar() != '\n');
			
			if(row < 0 || row >= MAXSIZE || col < 0 || col >= MAXSIZE){
				printf("Error \n Try Again \n");
			}
		}while(row < 0 || row >= MAXSIZE || col < 0 || col >= MAXSIZE);
		grid[row][col] = 1;
		printf(" Finish item (%d,%d)\n",row,col);
	}
	printf("-------------------------------\n");
	
	progrid (grid);
	
    return 0;
}

//check item
void progrid (int grid[MAXSIZE][MAXSIZE]){
	int row;
	int col;  
	
	while(1){
		printf("check row (0-%d ,-1 to exit) ",MAXSIZE-1);
		scanf("%d",&row);
		while(getchar() != '\n');
		
		if(row == -1){
			printf("Stop \n");
			break;
		}
		
		printf("check col (0-%d ,-1 to exit) ",MAXSIZE-1);
		scanf("%d",&col);
		while(getchar() != '\n');
		
		if(col == -1){
			printf("Stop \n");
			break;
		}
		
		if(row <0 || row >= MAXSIZE || col < 0 || col >= MAXSIZE){
			printf("error \n Try Again \n");
			continue;
		}
		
		if (grid[row][col] == 1){
			printf("Object detected at (%d,%d)\n",row,col);
		}else{
			printf("Position (%d,%d) is empty.\n",row,col);
		}
	}
	printf("=========================================\n");	
}
