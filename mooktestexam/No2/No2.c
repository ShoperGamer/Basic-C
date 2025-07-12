#include <stdio.h>

#define MAX_CATEGORIES 3
#define MAX_PRODUCTS_PER_CATEGORY 4

void processSale(int inventory[][MAX_PRODUCTS_PER_CATEGORY], 
                 int prices[][MAX_PRODUCTS_PER_CATEGORY], 
                 int category, 
                 int product, 
                 int quantity, 
                 float *transactionRevenue,
                 int quantitiesSold[][MAX_PRODUCTS_PER_CATEGORY]);
                 
float calculateProfit(int quantitiesSold[][MAX_PRODUCTS_PER_CATEGORY], 
                      int prices[][MAX_PRODUCTS_PER_CATEGORY], 
                      float costs[][MAX_PRODUCTS_PER_CATEGORY]);                 

int main() {
	int inventory[MAX_CATEGORIES][MAX_PRODUCTS_PER_CATEGORY];
	int prices[MAX_CATEGORIES][MAX_PRODUCTS_PER_CATEGORY];
	float costs[MAX_CATEGORIES][MAX_PRODUCTS_PER_CATEGORY];
	int i,j;
	int quantitiesSoldPerProduct[MAX_CATEGORIES][MAX_PRODUCTS_PER_CATEGORY] = {0}; 
	
	//inventory
	printf("------------ inventory -------------\n");
	for(i=0; i<MAX_CATEGORIES; i++){
		printf("---------- CATEGORIES %d --------------\n",i+1);
		for(j = 0; j<MAX_PRODUCTS_PER_CATEGORY; j++){
			int stock;
			do{
				printf("input stock  %d : ",j+1);
			    scanf("%d",&stock);
			    
			    if(stock < 0 || stock > 100 ){
			    	printf("Stock Error \n");
			    	printf("Try Again \n");
				}	    
			}while(stock < 0 || stock > 100);
			inventory[i][j] = stock;
		}
	}
	
//prices
	printf("\n\n\n------------ prices -------------\n");
	for(i=0; i<MAX_CATEGORIES; i++){
		printf("---------- CATEGORIES %d --------------\n",i+1);
		for(j = 0; j<MAX_PRODUCTS_PER_CATEGORY; j++){
			float pircestest;
			while(1){
				printf("input prices %d : ",j+1);
				scanf("%f",&pircestest);
				
				if(pircestest > 0){
					prices[i][j] = (int)pircestest;
					break;
				}else{
					printf("price Error \n");
					printf("Try Again \n");
				}
		     }
			}
}
	
//costs
       	printf("\n\n\n------------ costs -------------\n");
	     for(i=0; i<MAX_CATEGORIES; i++){
		printf("---------- CATEGORIES %d --------------\n",i+1);
		for(j = 0; j<MAX_PRODUCTS_PER_CATEGORY; j++){
           	float coststest;
	    while(1){
				printf("input cost %d : ",j+1);
				scanf("%f",&coststest);
				
				if(coststest > 0){
				costs[i][j] = coststest;
					break;
				}else{
					printf("costs Error \n");
					printf("Try Again \n");
				}
		     }
			}
	   }
 
 
 //start stock
    printf("\n--- Initial Stock, Prices, and Costs Summary ---\n");
    printf("Category | Product | Stock | Price  | Cost\n");
    printf("--------------------------------------------------\n");
    for(i = 0; i < MAX_CATEGORIES; i++){
    	for(j = 0; j<MAX_PRODUCTS_PER_CATEGORY; j++){
    		printf("%8d | %7s%d | %5d | %6d | %5.2f\n", //const them
                   i + 1, 
                   (i == 0 ? "A" : (i == 1 ? "B" : "C")), 
                   j + 1, inventory[i][j], prices[i][j], costs[i][j]);
		}
	}
	printf("--------------------------------------------------\n");
  
 //Daily Sales
 float daily = 0.00;
 int category,product,quantity;
 
printf("\n--- Part 2: Daily Sales Processing ---\n");
printf("Enter sales details (Category Index, Product Index, Quantity Sold).\n");
printf("Enter -1 for Category Index to stop sales.\n");
	
	while(1){
	
	//index
		do{
		
		printf("\nEnter Category Index (0-%d, -1 to stop): ", MAX_CATEGORIES - 1);
        scanf("%d", &category);
        if(category == -1){
        	break;
		}
		if(category <0 || category >= MAX_CATEGORIES){
			printf("Input Category incorrest\n Try Again\n");
		}
	}while(category <0 || category >= MAX_CATEGORIES);
	
	if(category == -1){
        	break;
		}
	
	//check	
	do{
		printf("Enter Product Index (0-%d): ", MAX_PRODUCTS_PER_CATEGORY - 1);
        scanf("%d", &product);
        if (product < 0 || product >= MAX_PRODUCTS_PER_CATEGORY) {
        printf("Product incorrect \n Try Again\n");
            }
	}while(product < 0 || product >= MAX_PRODUCTS_PER_CATEGORY);
	
	do {
        printf("Enter Quantity Sold (Available: %d): ", inventory[category][product]); 
        scanf("%d", &quantity); 
        if (quantity <= 0) {
            printf("Quantity must be positive. Please re-enter.\n");
        } else if (quantity > inventory[category][product]) {
            printf("Not enough stock. Only %d units available. Please re-enter.\n", inventory[category][product]);
        }
    } while (quantity <= 0 || quantity > inventory[category][product]);
	
	//process daily
    float transactionRevenue;
    
	processSale(inventory,prices,category,
	product,quantity,&transactionRevenue,quantitiesSoldPerProduct);
	daily += transactionRevenue;
	
	//display sales
	printf("\n--- Sales Summary ---\n");
    printf("Remaining Stock after Sales:\n");
    printf("Category | Product | Stock\n");
    printf("------------------------------\n");
     for (i = 0; i < MAX_CATEGORIES; i++) {
        for (j = 0; j < MAX_PRODUCTS_PER_CATEGORY; j++) {
            printf("%8d | %7s%d | %5d\n", 
                   i + 1, 
                   (i == 0 ? "A" : (i == 1 ? "B" : "C")), //mini if else 
                   j + 1, 
                   inventory[i][j]);
        }
    }
    printf("------------------------------\n");
    printf("Total Daily Revenue: %.2f\n", daily);
    
    float Profit = calculateProfit(quantitiesSoldPerProduct, prices, costs);
    printf("\n--- Part 3: Reporting and Analysis ---\n");
    printf("Total Daily Profit: %.2f\n", Profit);

	
	}
	return 0;
}


void processSale(int inventory[][MAX_PRODUCTS_PER_CATEGORY], 
                 int prices[][MAX_PRODUCTS_PER_CATEGORY], 
                 int category, 
                 int product, 
                 int quantity, 
                 float *transactionRevenue,
				 int quantitiesSold[][MAX_PRODUCTS_PER_CATEGORY]){
                 	
      if (category < 0 || category >= MAX_CATEGORIES ||
        product < 0 || product >= MAX_PRODUCTS_PER_CATEGORY) {
        printf("Error in processSale: Invalid category or product index.\n");
        *transactionRevenue = 0.0; 
        return;
    }

    if (quantity <= 0 || quantity > inventory[category][product]) {
        printf("Error in processSale: Invalid quantity or insufficient stock.\n");
        *transactionRevenue = 0.0; 
        return;
    }

    inventory[category][product] -= quantity; 
    quantitiesSold[category][product] += quantity;
    *transactionRevenue = (float)quantity * prices[category][product]; 
    printf("  --> Sold %d units of Product %s%d. Revenue for this sale: %.2f\n", 
           quantity, 
           (category == 0 ? "A" : (category == 1 ? "B" : "C")), 
           product + 1, 
           *transactionRevenue);
	
	
}


float calculateProfit(int quantitiesSold[][MAX_PRODUCTS_PER_CATEGORY], 
                      int prices[][MAX_PRODUCTS_PER_CATEGORY], 
                      float costs[][MAX_PRODUCTS_PER_CATEGORY]){
                      	
                      	float Profit = 0.0;
    int i, j;

    printf("\n--- Calculating Profit Details ---\n");
    printf("Category | Product | Quantity Sold | Unit Price | Unit Cost | Unit Profit | Sale Profit\n");
    printf("----------------------------------------------------------------------------------------\n");

    for (i = 0; i < MAX_CATEGORIES; i++) {
        for (j = 0; j < MAX_PRODUCTS_PER_CATEGORY; j++) {
            if (quantitiesSold[i][j] > 0) { 
                float unitProfit = (float)prices[i][j] - costs[i][j];
                float saleProfit = unitProfit * quantitiesSold[i][j];
                Profit += saleProfit;

                printf("%8d | %7s%d | %13d | %10d | %9.2f | %11.2f | %11.2f\n",
                       i + 1,
                       (i == 0 ? "A" : (i == 1 ? "B" : "C")),
                       j + 1,
                       quantitiesSold[i][j],
                       prices[i][j], 
                       costs[i][j], 
                       unitProfit, 
                       saleProfit);
            }
        }
    }
    printf("----------------------------------------------------------------------------------------\n");
    return Profit;     	
	}  
