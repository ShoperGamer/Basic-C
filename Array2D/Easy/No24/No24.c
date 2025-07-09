#include <stdio.h>
#include <stdbool.h> //Boolean Library

//Check Simulator
bool check(int judy[3][3], int size){
	bool checkjudy = true;
	int i,j;
	
	for(i=0; i<size; i++){
		for(j=0; j<size; j++){
			if(i == j){
	            //inside main
			    if(judy[i][j] != 1){
			    	checkjudy = false;
			    	break;	
			    }
			}
			    //Outside main
		    else{
				if(judy[i][j] != 0){
			    	checkjudy = false;
			    	break;
				}
			}
	    }
	    if(checkjudy == false){
	    	break;
		}
     }
	return checkjudy;
}

//main
int main() {
	int identity[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
	int not_identity[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 1, 1}};

	printf("Identity Matrix: ");
	if(check(identity,3)){
		printf("Is Identity\n");
	}else{
		printf("Is NOT Identity\n");
	}
	
	printf("not_Identity Matrix: ");
	if(check(not_identity,3)){
		printf("Is Identity\n");
	}else{
		printf("Is NOT Identity\n");
	}
    return 0;
}

