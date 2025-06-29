#include <stdio.h>

int main(){
	float price,service,vat,tipplus,total,afterservice,aftervat,person;
	int people;
	char tip;
	
	printf("input price : ");
	scanf("%f",&price);
	
	printf("input people : ");
	scanf("%d",&people);
	
	printf("Tip (y/n): ");
	scanf(" %c",&tip);
	
	if(price <= 0){
		printf("Error: Invalid food price!\n");return 1;
	}
//Service Charge
	service = price * 0.10;
	afterservice = price + service;
	
//VAT
    vat = service * 0.07;
    aftervat = afterservice + vat;
    
//Tip
     if(tip == 'Y' ||tip == 'y' 
	 ||tip == 'N' ||tip == 'n'){
     	if(tip == 'Y' ||tip == 'y'){
     		tipplus = aftervat * 0.05;
		 }
	 }
	 else{
	 	printf("Error: Invalid tip choice!\n");return 1;
	 }
	 
	 total = aftervat + tipplus;
	 
//people
     if(people <= 0){
     	printf("Error: Invalid number of people!\n");return 1;
	 }else if(people >= 1){
	 	person = total / people;
	 }
     
    printf("\n--- Bill Judy ---\n");
	printf("Food Price         : %.2f Baht\n", price);
	printf("Service Charge (10%%): %.2f Baht\n", service);
	printf("Subtotal           : %.2f Baht\n", afterservice);
	printf("VAT (7%)           : %.2f Baht\n", vat);
	printf("Total before Tip   : %.2f Baht\n", aftervat);
	printf("Tip (5%)           : %.2f Baht\n", tip);
	printf("--------------------\n");
	printf("TOTAL BILL         : %.2f Baht\n", total);
	printf("AMOUNT PER PERSON  : %.2f Baht\n", person);
	return 0;
	
}
