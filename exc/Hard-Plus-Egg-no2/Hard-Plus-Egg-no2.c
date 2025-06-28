#include <stdio.h>

int main(){
     int kilogram,kilofar;
     char thunder,member;
     float total,price,per=0.00;
     
     printf ("heavy : ");
     scanf("%d",&kilogram);
     
     printf("How far : ");
     scanf("%d",&kilofar);
     
     printf("What express : ");
     scanf(" %c",&thunder);
     
     printf("member : ");
     scanf(" %c",&member);
     
//far,perkilo
     if(kilofar >= 1 && kilofar <= 100){ 
     switch(thunder){
     	case'S': case 's': per = 10; break;
     	case'E': case 'e': per = 15; break;
     	case'O': case 'o': per = 20; break;
     	default : printf("Invalid Service Type!"); return 1;
	 }
 }
 
   else if(kilofar >= 101 && kilofar <= 500){ 
     switch(thunder){
     	case'S': case 's': per = 12; break;
     	case'E': case 'e': per = 18; break;
     	case'O': case 'o': per = 25; break;
     	default : printf("Invalid Service Type!"); return 1;
	 }
 }
 
    else if(kilofar > 500){ 
     switch(thunder){
     	case'S': case 's': per = 15; break;
     	case'E': case 'e': per = 22; break;
     	case'O': case 'o': per = 30; break;
     	default : printf("Invalid Service Type!"); return 1;
	 }
 }
 
 else{
 	printf("Invalid Weight!"); return 1;
 }
 
 price = per * kilogram;
 
 //kilo
   if (kilogram <= 0){
   	printf("Invalid Weight!"); return 1;
   }
   else if(kilogram >= 20){
   	 price = per + 50;
   }
   
//member
   if(member == 'Y' || member == 'y'){
   	price *= (1.0f - 0.1f);
   }else if (member == 'N' || member == 'n'){
   	price = price;
   }else{
   	printf("Invalid Membership Status!"); return 1;
   }
   
   total = price;
   printf("Final Delivery Fee: %.2f",total);
   
     return 0;
}

