#include <stdio.h>
#include <string.h> // Required for strcmp and strlen functions

#define MAX_CATEGORIES 3
#define MAX_PRODUCTS_PER_CATEGORY 4
#define MAX_PROMOCODE_LENGTH 20 // Adjusted for typical promocode length, using maxmenuname is fine too

int main() {
    // Category names (e.g., "tea", "coffee", "candy")
    char* menu[MAX_CATEGORIES] = {"tea", "coffee", "candy"};
    
    // Product names within each category
    char* PRODUCTS[MAX_CATEGORIES][MAX_PRODUCTS_PER_CATEGORY] = {
        {"greentea 0%", "greentea 25%", "greentea 50%", "greentea 100%"},
        {"Latae 0% ", "Latae 25%", "Latae 50%", "Latae 100%"},
        {"Chocolate Cake", "Brownie", "Cookie", "Waffle"}
    };
    
    // Prices for each product
    int prices[MAX_CATEGORIES][MAX_PRODUCTS_PER_CATEGORY];
    
    int i, j; // Loop counters
    
    // Variables for order processing, declared at the top of main() for proper scope
    float currentOrderTotalPrice = 0.0;
    int orderQuantities[MAX_CATEGORIES][MAX_PRODUCTS_PER_CATEGORY] = {0}; // Initialize to zeros
    int categoryChoice, productChoice, quantityOrdered;

    // --- Step 1: Input Menu Prices ---
    for (i = 0; i < MAX_CATEGORIES; i++) {
        printf("\n--- Input Prices for %s category ---\n", menu[i]);
        for (j = 0; j < MAX_PRODUCTS_PER_CATEGORY; j++) {
            int priceInput;
            do {
                printf("  Input price for %s (must be > 0): ", PRODUCTS[i][j]);
                scanf("%d", &priceInput);
                // Clear input buffer after scanf to consume the newline character
                while (getchar() != '\n'); 

                if (priceInput <= 0) {
                    printf("  Input price error! Please try again.\n");
                }
            } while (priceInput <= 0);
            prices[i][j] = priceInput;
        }
    }
    
    printf("\n------------ Welcome to Our Cafe ---------------\n");
    
    // --- Display all menus and their prices (Answer 1) ---
    for (i = 0; i < MAX_CATEGORIES; i++) {
        printf("================= %s ==============\n", menu[i]);
        for (j = 0; j < MAX_PRODUCTS_PER_CATEGORY; j++) {
            printf("%d. %-20s Price: %d Baht\n", j + 1, PRODUCTS[i][j], prices[i][j]);
        }
    }
    printf("=======================================\n");
    
    // --- Start Step 2: Taking Orders ---
    printf("\n--- Start taking orders ---\n");
    // Display categories for the user to choose from (0-based index for input)
    for (i = 0; i < MAX_CATEGORIES; i++) {
        printf("%d. %s\n", i, menu[i]);
    }
    printf("Enter category ID (0-%d, -1 to finish order):\n", MAX_CATEGORIES - 1);
    
    while (1) { // Main loop for continuously taking orders
        // Get category choice with validation
        do {
            printf("\nEnter category ID (0-%d, -1 to finish): ", MAX_CATEGORIES - 1);
            scanf("%d", &categoryChoice);
            while (getchar() != '\n'); // Clear input buffer
            
            if (categoryChoice == -1) {
                break; // Exit this do-while loop if user enters -1
            }
            if (categoryChoice < 0 || categoryChoice >= MAX_CATEGORIES) {
                printf("Input error! Please try again.\n");
            }
        } while (categoryChoice < 0 || categoryChoice >= MAX_CATEGORIES);
        
        if (categoryChoice == -1) {
            break; // Exit main while(1) loop if -1 was entered
        }
        
        // Display products within the selected category for ordering
        printf("\n--- Products in %s category ---\n", menu[categoryChoice]);
        for (j = 0; j < MAX_PRODUCTS_PER_CATEGORY; j++) {
            printf("%d. %-20s Price: %d Baht\n", j, PRODUCTS[categoryChoice][j], prices[categoryChoice][j]);
        }
        
        // Get product choice with validation
        do {
            printf("Enter product ID for %s (0-%d): ", menu[categoryChoice], MAX_PRODUCTS_PER_CATEGORY - 1);
            scanf("%d", &productChoice);
            while (getchar() != '\n'); // Clear input buffer
            
            if (productChoice < 0 || productChoice >= MAX_PRODUCTS_PER_CATEGORY) {
                printf("Invalid product ID! Please try again.\n");
            }
        } while (productChoice < 0 || productChoice >= MAX_PRODUCTS_PER_CATEGORY);
        
        // Get quantity for the selected product with validation
        do {
            printf("Enter quantity for %s: ", PRODUCTS[categoryChoice][productChoice]);
            scanf("%d", &quantityOrdered);
            while (getchar() != '\n'); // Clear input buffer
            
            if (quantityOrdered <= 0) {
                printf("Quantity must be positive! Please try again.\n");
            }
        } while (quantityOrdered <= 0);

        // Calculate item price and update total order price
        float itemPrice = (float)prices[categoryChoice][productChoice] * quantityOrdered;
        currentOrderTotalPrice += itemPrice;
        
        // Update total quantity sold for this specific product
        orderQuantities[categoryChoice][productChoice] += quantityOrdered; 
        
        printf("------- Order Added --------\n");
        printf("Ordered: %s (Category: %s), Quantity: %d, Item Price: %.2f Baht\n",
               PRODUCTS[categoryChoice][productChoice], 
               menu[categoryChoice], 
               quantityOrdered, 
               itemPrice);
        printf("Current Order Total: %.2f Baht\n", currentOrderTotalPrice);
    } // End of while(1) order loop
    
    printf("\n----------------------------------\n");
    printf("Total before discount: %.2f Baht\n", currentOrderTotalPrice); 
    
    // --- Step 3: Calculate Final Price with Discount and Sales Summary ---
    printf("\n--- Step 3: Calculating Final Price and Sales Summary ---\n");

    char promocode[MAX_PROMOCODE_LENGTH]; // Use MAX_PROMOCODE_LENGTH for promocode buffer
    printf("Send your code : ");
    scanf("%s", promocode);
    while (getchar() != '\n'); // Clear input buffer
    
    // Check and apply discount
    if (strcmp(promocode, "SAVE10") == 0) { 
        currentOrderTotalPrice *= 0.90; // 10% off
        printf("  >>> Applied 'SAVE10' discount! 10%% off.\n");
    } else if (strcmp(promocode, "BUY2GET100") == 0) { 
        if (currentOrderTotalPrice > 200.0) {
            currentOrderTotalPrice -= 100.0; // 100 Baht off
            printf("  >>> Applied 'BUY2GET100' discount! 100 Baht off.\n");
            if (currentOrderTotalPrice < 0) { // Prevent negative total
                currentOrderTotalPrice = 0.0;
            }
        } else {
            printf("  >>> 'BUY2GET100' discount not applicable: total must be greater than 200 Baht.\n");
        }
    } else if (strlen(promocode) > 0) { // If an unknown code was entered
        printf("  >>> Invalid discount code '%s'.\n", promocode);
    } else { // If left blank (no code)
        printf("  >>> No discount applied.\n");
    }

    printf("Final total after discount: %.2f Baht\n", currentOrderTotalPrice);

    // Display Sales Summary
    printf("\n--- Sales Summary for this Order ---\n");
    for (i = 0; i < MAX_CATEGORIES; i++) {
        int categoryHasSoldItems = 0; // Flag to print category header only once
        for (j = 0; j < MAX_PRODUCTS_PER_CATEGORY; j++) { 
            if (orderQuantities[i][j] > 0) { // Check if any items from this product were sold
                if (!categoryHasSoldItems) { // If category header hasn't been printed yet
                    printf("Category: %s\n", menu[i]); // Print category header
                    categoryHasSoldItems = 1; // Set flag to true
                }
                printf("  %s: %d units\n", PRODUCTS[i][j], orderQuantities[i][j]); // Print product and quantity
            }
        }
    }
    printf("------------------------------------\n");
    printf("Thank you for your order!\n");
    
    return 0;
}
