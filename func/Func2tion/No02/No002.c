#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 4
#define MAX_PRODUCT_NAME_LENGTH 50

void input_inventory_data(char name[][MAX_PRODUCT_NAME_LENGTH],
int product[MAX_PRODUCTS]);

void search_and_display_stock(char name[][MAX_PRODUCT_NAME_LENGTH],
int product[MAX_PRODUCTS]);


int main() {
	int i,j;
	char name[MAX_PRODUCTS][MAX_PRODUCT_NAME_LENGTH];
	int product[MAX_PRODUCTS];
	
	printf("------------ Input name & product ------------\n");
	input_inventory_data(name,product);
	
	printf("------------- Search & Display -------------\n");
	search_and_display_stock(name,product);
	
	
    return 0;
}

void input_inventory_data(char name[][MAX_PRODUCT_NAME_LENGTH],
int product[MAX_PRODUCTS]){
int i;	
int pro;

	for(i=0; i<MAX_PRODUCTS; i++){
			printf("input product %d : ",i+1);
		    scanf("%s",name[i]);
	        while (getchar() != '\n');
	         
		    do {
            printf("how many product %s (more 0): ", name[i]);
            scanf("%d", &pro);
            while (getchar() != '\n'); 
            if (pro <= 0) {
                printf("error! Try Again\n");
            }
		} while (pro <= 0);
		product[i] = pro;
    }
    
    
    
	printf("======================================\n");
}

void search_and_display_stock(char name[][MAX_PRODUCT_NAME_LENGTH],
int product[MAX_PRODUCTS]){
	int i;
	char search[MAX_PRODUCT_NAME_LENGTH];
	int found = 0;
	
	printf("input Product : ");
    scanf("%s", search); 
    while (getchar() != '\n'); 
	
	for(i=0; i<MAX_PRODUCTS; i++){
		 if (strcmp(search, name[i]) == 0) {
            printf("found %s total %d \n", name[i], product[i]);
            found = 1;
	        break;
	    }
}

    if (found == 0) { 
        printf("not found '%s' in base\n", search);
    }
       
	printf("======================================\n");	
}
