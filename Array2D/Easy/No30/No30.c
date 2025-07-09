#include <stdio.h>

int main() {
	int arr[5][5];
    int i,j,rows,columns,total=0;
    
    printf("Enter number of rows (max 5): ");
    scanf("%d",&rows);
    
    if(rows > 5 || rows <=0){
    	printf("Rows error"); return 1;
    }
    
    printf("Enter number of columns (max 5): ");
    scanf("%d",&columns);
     
    if(columns > 5 || columns <=0){
    	printf("Columns error"); return 1;
    }
    
    for(i=0; i<rows; i++){
    	for(j=0; j<columns; j++){
    		printf("Enter element at [%d][%d]: ",i,j);
    		scanf("%d",&arr[i][j]);
    		total += arr[i][j];
		}
	}
    printf("Sum : %d",total);
	
    return 0;
}
