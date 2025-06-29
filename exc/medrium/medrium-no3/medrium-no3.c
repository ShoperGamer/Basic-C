#include <stdio.h>

int main(){
	float salary,hours,total,ot=0.0,bonus=0.0;
	int year;
	
	printf("Base Salary : ");
	scanf("%f",&salary);
	
	printf("Years of Service : ");
	scanf("%d",&year);
	
	printf("Overtime Hours : ");
	scanf("%f",&hours);

//error
if(salary <= 0){
	printf("Error: Invalid base salary!\n");return 1;
}

if(year <= 0){
	printf("Error: Invalid years of service!\n");return 1;
}

if(hours <= 0){
	printf("Error: Invalid overtime hours!\n");return 1;
}
	
// bonus
 if(year >= 5){
 	bonus = salary*0.10;	
 }

//Overtime - OT
 if(hours > 20){
 	ot = (20.0*150)+((hours - 20.0)*200);
 	hours = 20;
 }
 else{
 	ot = hours * 150;
 }
 
//total
   total = salary + bonus + ot;
   
   printf("bonus : %.2f\n",bonus);
   printf("ot : %.2f\n",ot);
   printf("total : %.2f\n",total);
	
	return 0;
}
