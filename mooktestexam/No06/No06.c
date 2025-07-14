#include <stdio.h>

#define MAXsample 4
#define MAXparameter 2

void processStabilityIndex(float soil_data[MAXsample][MAXparameter],char* header[]);
int main() {
    float soil_data[MAXsample][MAXparameter];
    char* column[MAXparameter + 1] = {"Index"," Moisture Content (%)","Shear Strength (kPa)"};
    int i,j;
    
    for(i=0; i<MAXsample; i++){
    	printf("---------- sample %d -------------------\n",i+1);
    	for(j=0; j<MAXparameter; j++){	
			do{
    			if(j == 0){
				printf(" Input Moisture Content (%) : ");
			}else{
				printf(" Shear Strength (kPa): ");
			}
			
			scanf("%f",&soil_data[i][j]);
				while (getchar() != '\n');
			
			if(soil_data[i][j] <= 0){
				printf("Error \n Try Again \n");
			}
    			
			}while (soil_data[i][j] <= 0);
		}
	}
	
	processStabilityIndex(soil_data,column);
    
    return 0;
}

void processStabilityIndex(float soil_data[MAXsample][MAXparameter],char* header[]){
    int i,j;
    
    printf("---------------- Total Table ------------------------\n");
    printf("%-15s",header[0]);
    for(j=0; j<MAXparameter; j++){
    	printf("%-25s",header[j+1]);
	}
	printf("---------------------------------\n");
	
	for(i=0; i<MAXsample; i++){
    	printf("%-15d",i+1);
    	printf("%-25.2f", soil_data[i][0]);
    	printf("%-25.2f", soil_data[i][1]);
    	printf("\n");
	}
	printf("---------------------------------\n");
	
    for(i=0; i<MAXsample; i++){
    	 int StabilityIndex = 10;
    	 printf("--------------- Drit %d ----------------\n",i+1);
    	 if(soil_data[i][0] > 20.0){
    	 	StabilityIndex -= 3;
    	 	printf(" Moisture Content  = %.2f%%  index - 3\n",soil_data[i][0]);
		 }
		 if(soil_data[i][1] < 50.0){
    	 	StabilityIndex -= 4;
    	 	printf(" Shear Strength  = %.2f%% index - 4\n",soil_data[i][1]);
		 }
		 printf("total index = %d",StabilityIndex);
		 
	// Stability Index
    if(StabilityIndex >= 7){
    	printf("Highly Stable\n");
	}else if(StabilityIndex >= 4 && StabilityIndex < 7){
			printf("Moderately Stable\n");
	}else{
		printf("Unstable\n");
	}
	printf("\n");
	}
}

