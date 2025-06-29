

#include <stdio.h>

int main (){
	 char user,peak;
	 int wat;
	 float price = 0.0f,total;
	 
	 printf("Type user (r/c) : ");
	 scanf(" %c",&user);
	 
	 printf("how much wat : ");
	 scanf("%d",&wat);
	 
	 printf("Peak Hour: ");
	 scanf(" %c",&peak);
	 
//type user
	 if(user == 'r' || user == 'R'){
	 if(wat > 400){
            price += (wat - 400) * 4.4217f;
            wat = 400;
        }
        if(wat > 100){
            price += (wat - 100) * 4.2238f;
            wat = 100;
        }
        if(wat > 50){
            price += (wat - 50) * 3.7383f;
            wat = 50;
        }
        if(wat >= 0){ 
            price += wat * 3.2484f;
        }
	    else{
        	printf("Invalid Units!");return 1;
        }
	 }
	 
	 else if(user == 'c' || user == 'C'){
	 if(wat > 500){
            price += (wat - 500) * 5.1012f;
            wat = 500;
        }
        if(wat > 200){
            price += (wat - 200) * 4.8018f;
            wat = 200;
        }
        if(wat >= 0){ 
            price += wat * 4.6315f;
        }else{
        	printf("Invalid Units!");return 1;
		}
	 }
	 
	 else{
	 	printf("Invalid User Type!"); return 1;
	 }

//Peak Hour
  if(peak == 'Y' || peak == 'y'){
  	    price *= (1.0f + 0.075f);
  }
  
  else if(peak == 'N' || peak == 'n'){
  	price = price;
  }
  
  else{
   	printf("Invalid Peak Hour Status!"); return 1;
   }
   
   if(user == 'r' || user == 'R'){
  		price += 38.22f;
    }else if(user == 'C' || user == 'c'){
      price += 246.20f;
	  }
	  
	total = price;
	printf("Final Electricity Bill: %.2f",total);
	return 0;
}
