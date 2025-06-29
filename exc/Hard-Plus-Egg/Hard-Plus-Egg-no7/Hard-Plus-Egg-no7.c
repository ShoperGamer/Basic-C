#include <stdio.h>

int main(){
	char pass;
	int nomna;
	float total,item;
	
	printf("input pass: ");
	scanf(" %c",&pass);
	
	printf("How many nomna : ");
	scanf("%d",&nomna);
	
	
	if(nomna <= 0){
		printf("Error: Invalid quantity!"); return 1;
	}
		switch(pass){
			case 'A': case 'a': item = 100; break;
			case 'B': case 'b' : item = 150; break;
			case 'C' : case 'c' : item = 200; break;
			case 'D' : case 'd': item = 250; break;
			default: printf("Error: Invalid product code!"); return 1;
		}
//nomna per item
	total = nomna * item;
		
//more 10 item		
	if (nomna >= 10){
		total *= (1.0f - 0.10f);
}

    printf("total : %.2f",total);
	
	return 0;
}
