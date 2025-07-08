#include <stdio.h>

int main(){
	int classroom,score;
	float price,total,totalfee;
	char subject,member;
	
	printf("subject(M/S/E/O): ");
	scanf(" %c",&subject);
	
	printf("class: ");
	scanf("%d",&classroom);
	
	printf("member(Y/N): ");
	scanf(" %c",&member);
	
	printf("how many cource : ");
	scanf("%d",&score);
	
	if(classroom >= 1 && classroom <= 6){
		switch(subject){
			case 'M': price = 2000.0f; break;
			case 'S': price = 2200.0f; break;
			case 'E': price = 1800.0f; break;
			case 'O': price = 1500.0f; break;
			
			case 'm': price = 2000.0f; break;
			case 's': price = 2200.0f; break;
			case 'e': price = 1800.0f; break;
			case 'o': price = 1500.0f; break;
			default: printf("Invalid Course Type!"); break;
		}
	}
	
	else if(classroom >= 7 && classroom <= 9){
		switch(subject){
			case 'M': price = 2500.0f; break;
			case 'S': price = 2700.0f; break;
			case 'E': price = 2300.0f; break;
			case 'O': price = 2000.0f; break;
			
			case 'm': price = 2500.0f; break;
			case 's': price = 2700.0f; break;
			case 'e': price = 2300.0f; break;
			case 'o': price = 2000.0f; break;
			default: printf("Invalid Course Type!"); break;
		}
	}
	
	else if(classroom >= 10 && classroom <= 12){
	    switch(subject){
			case 'M': price = 3000.0f; break;
			case 'S': price = 3200.0f; break;
			case 'E': price = 2800.0f; break;
			case 'O': price = 2500.0f; break;
			
			case 'm': price = 3000.0f; break;
			case 's': price = 3200.0f; break;
			case 'e': price = 2800.0f; break;
			case 'o': price = 2500.0f; break;
			default: printf("Invalid Course Type!"); break;
		}
	}
	
	else{
		printf( "Invalid Grade Level!");
		return 1 ;
	}


    if(score < 1){
        printf("Invalid Number of Courses!");
		return 1 ;	
    }
    
	total = price * score;
    	
	if(score >= 2 && score <= 3){ 
    total *= (1.0f - 0.05f); 
    } else if(score >= 4){ 
        total *= (1.0f - 0.10f); 
    }
    
     if(member == 'Y' || member == 'y'){
        total *= (1.0f - 0.07f);
}
	printf("Final Total Fee : %.2f",total);
	return 0;
}
