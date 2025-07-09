#include <stdio.h>

int main() {
    int matrix[][3] = {{1,2,3}, {4,5,6}, {7,8,9}}; 
    int sizex = sizeof(matrix)/sizeof(matrix[0]); //Size of Array 1D
    int sizey = sizeof(matrix[0])/sizeof(matrix[0][0]); //Size of Array 2D
    int i,j;
    
    printf("Rows: %d\n",sizex);
    printf("Columns: %d",sizey);
    
    return 0;
}
