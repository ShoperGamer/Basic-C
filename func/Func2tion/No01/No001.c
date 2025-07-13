#include <stdio.h>

#define MAX_CATEGORIES 3
#define MAX_PRODUCTS_PER_CATEGORY 4

// --- Function Prototypes ---
void setup_stock_and_prices(int prices[][MAX_PRODUCTS_PER_CATEGORY],
                            int stock[][MAX_PRODUCTS_PER_CATEGORY],
                            char* fruit[],
                            char* typefruit[][MAX_PRODUCTS_PER_CATEGORY]);

void display_all_products_with_stock(int prices[][MAX_PRODUCTS_PER_CATEGORY],
                                     int stock[][MAX_PRODUCTS_PER_CATEGORY],
                                     char* fruit[],
                                     char* typefruit[][MAX_PRODUCTS_PER_CATEGORY]);

void update_stock(char* fruit[],
                  char* typefruit[][MAX_PRODUCTS_PER_CATEGORY],
                  int stock[][MAX_PRODUCTS_PER_CATEGORY]);

float process_sale(int stock[][MAX_PRODUCTS_PER_CATEGORY],
                   int prices[][MAX_PRODUCTS_PER_CATEGORY],
                   int total_items_sold[][MAX_PRODUCTS_PER_CATEGORY],
                   char* fruit[],
                   char* typefruit[][MAX_PRODUCTS_PER_CATEGORY]);

void generate_daily_report(char* fruit[],
                           char* typefruit[][MAX_PRODUCTS_PER_CATEGORY],
                           int prices[][MAX_PRODUCTS_PER_CATEGORY],
                           int total_items_sold[][MAX_PRODUCTS_PER_CATEGORY],
                           float daily_total_revenue,
                           int final_stock[][MAX_PRODUCTS_PER_CATEGORY]);

// --- Main Function ---
int main() {
    char* fruit[MAX_CATEGORIES] = {"LeafyGreens", "FleshyFruits", "Berries"};
    char* typefruit[MAX_CATEGORIES][MAX_PRODUCTS_PER_CATEGORY] =
    {{"ChineseKale", "MorningGlory", "Cabbage", "Lettuce"},
    {"Mango", "Banana", "Orange", "Watermelon"},
    {"Strawberry", "Blueberry", "Raspberry", "Cranberry"}};
    int prices[MAX_CATEGORIES][MAX_PRODUCTS_PER_CATEGORY];
    int stock[MAX_CATEGORIES][MAX_PRODUCTS_PER_CATEGORY];

    // Array for accumulating total quantities sold for each product
    int total_items_sold[MAX_CATEGORIES][MAX_PRODUCTS_PER_CATEGORY] = {0};
    float daily_total_revenue = 0.0; // Accumulates total revenue for the day

    printf("--------------- Part 1 Stock & Price -----------\n");
    setup_stock_and_prices(prices, stock, fruit, typefruit);

    printf("\n----------------- Part 2 Display --------------------\n");
    display_all_products_with_stock(prices, stock, fruit, typefruit);

    printf("\n----------------- Part 3 Update Stock --------------------\n");
    update_stock(fruit, typefruit, stock);

    printf("\n----------------- Part 4 Sales System (Example Sales) --------------------\n");
    // Example of calling process_sale multiple times
    printf("\n--- Starting Sale 1 ---\n");
    daily_total_revenue += process_sale(stock, prices, total_items_sold, fruit, typefruit);
    printf("\n--- Starting Sale 2 ---\n");
    daily_total_revenue += process_sale(stock, prices, total_items_sold, fruit, typefruit);
    printf("\n--- Starting Sale 3 ---\n");
    daily_total_revenue += process_sale(stock, prices, total_items_sold, fruit, typefruit);

    printf("\n--- All sales completed for the day. ---\n");

    printf("\n----------------- Part 5 Daily Report --------------------\n");
    generate_daily_report(fruit, typefruit, prices, total_items_sold, daily_total_revenue, stock);

    return 0;
}

// --- Function Definitions ---

void setup_stock_and_prices(int prices[][MAX_PRODUCTS_PER_CATEGORY],
                            int stock[][MAX_PRODUCTS_PER_CATEGORY],
                            char* fruit[],
                            char* typefruit[][MAX_PRODUCTS_PER_CATEGORY]) {
    int i, j;

    for (i = 0; i < MAX_CATEGORIES; i++) {
        printf("\n--- Input Prices and Stock for %s category ---\n", fruit[i]);
        for (j = 0; j < MAX_PRODUCTS_PER_CATEGORY; j++) {
            int priceInput;
            do {
                printf("Input price for %s (must be > 0): ", typefruit[i][j]);
                scanf("%d", &priceInput);
                while (getchar() != '\n');
                if (priceInput <= 0) {
                    printf("Price error! Price must be positive. Try Again.\n");
                }
            } while (priceInput <= 0);
            prices[i][j] = priceInput;

            int stockinput;
            do {
                printf("Input stock for %s (must be > 0): ", typefruit[i][j]);
                scanf("%d", &stockinput);
                while (getchar() != '\n');
                if (stockinput <= 0) {
                    printf("Stock error! Stock must be positive. Try Again.\n");
                }
            } while (stockinput <= 0);
            stock[i][j] = stockinput;
        }
    }
    printf("\n--- Stock and Prices setup complete! ---\n");
}


void display_all_products_with_stock(int prices[MAX_CATEGORIES][MAX_PRODUCTS_PER_CATEGORY],
                                     int stock[MAX_CATEGORIES][MAX_PRODUCTS_PER_CATEGORY],
                                     char* fruit[MAX_CATEGORIES],
                                     char* typefruit[MAX_CATEGORIES][MAX_PRODUCTS_PER_CATEGORY]) {

    int i, j;

    printf("--------- Fruit in store ----------\n");
    for (i = 0; i < MAX_CATEGORIES; i++) {
        printf("[%d] %s:\n", i, fruit[i]);
        for (j = 0; j < MAX_PRODUCTS_PER_CATEGORY; j++) {
            printf("  %d. %-20s (Price: %d|Stock: %d)\n", j,
                   typefruit[i][j],
                   prices[i][j],
                   stock[i][j]);
        }
    }
    printf("-----------------------------------\n");
}

void update_stock(char* fruit[MAX_CATEGORIES],
                  char* typefruit[MAX_CATEGORIES][MAX_PRODUCTS_PER_CATEGORY],
                  int stock[MAX_CATEGORIES][MAX_PRODUCTS_PER_CATEGORY]) {

    int i,j;
    int categoryId, productId, quantityToAdd;

    printf("\n -------------- Update Stock --------------------\n");

    for (i = 0; i < MAX_CATEGORIES; i++) {
        printf("%d. %s\n", i, fruit[i]);
    }

    do {
        printf("Enter category ID to update stock (0-%d): ", MAX_CATEGORIES - 1);
        scanf("%d", &categoryId);
        while (getchar() != '\n');
        if (categoryId < 0 || categoryId >= MAX_CATEGORIES) {
            printf("Invalid category ID. Please try again.\n");
        }
    } while (categoryId < 0 || categoryId >= MAX_CATEGORIES);

    printf("\n--- Products in %s category ---\n", fruit[categoryId]);
    for (j = 0; j < MAX_PRODUCTS_PER_CATEGORY; j++) {
        printf("  %d. %s (Current Stock: %d)\n", j, typefruit[categoryId][j], stock[categoryId][j]);
    }

    do {
        printf("Enter product ID to update stock (0-%d): ", MAX_PRODUCTS_PER_CATEGORY - 1);
        scanf("%d", &productId);
        while (getchar() != '\n');
        if (productId < 0 || productId >= MAX_PRODUCTS_PER_CATEGORY) {
            printf("Invalid product ID. Please try again.\n");
        }
    } while (productId < 0 || productId >= MAX_PRODUCTS_PER_CATEGORY);

    do {
        printf("Enter quantity to add for %s (current stock: %d kg): ", typefruit[categoryId][productId], stock[categoryId][productId]);
        scanf("%d", &quantityToAdd);
        while (getchar() != '\n');
        if (quantityToAdd <= 0) {
            printf("Quantity to add must be positive. Please try again.\n");
        }
    } while (quantityToAdd <= 0);

    stock[categoryId][productId] += quantityToAdd;
    printf("Stock for %s updated. New stock: %d kg.\n", typefruit[categoryId][productId], stock[categoryId][productId]);

    printf("--- Stock update complete! ---\n");
}


float process_sale(int stock[][MAX_PRODUCTS_PER_CATEGORY],
                   int prices[][MAX_PRODUCTS_PER_CATEGORY],
                   int total_items_sold[][MAX_PRODUCTS_PER_CATEGORY],
                   char* fruit[MAX_CATEGORIES],
                   char* typefruit[MAX_CATEGORIES][MAX_PRODUCTS_PER_CATEGORY]) {

    int i, j;
    int categoryChoice, productId, quantityToBuy;
    float bill = 0.00;

    printf("\n-------------- Sales System (Enter -1 for Category ID to finish) --------------------\n");

    while (1) {
        printf("\n--- Available Categories ---\n");
        for (i = 0; i < MAX_CATEGORIES; i++) {
            printf("%d. %s\n", i, fruit[i]);
        }

        do {
            printf("Enter Category ID (0-%d, or -1 to finish current bill): ", MAX_CATEGORIES - 1);
            scanf("%d", &categoryChoice);
            while (getchar() != '\n');

            if (categoryChoice == -1) {
                break;
            }
            if (categoryChoice < 0 || categoryChoice >= MAX_CATEGORIES) {
                printf("Invalid category ID. Please try again.\n");
            }
        } while (categoryChoice < 0 || categoryChoice >= MAX_CATEGORIES);

        if (categoryChoice == -1) {
            break;
        }

        printf("\n--- Products in %s category (Current Stock & Price) ---\n", fruit[categoryChoice]);
        for (j = 0; j < MAX_PRODUCTS_PER_CATEGORY; j++) {
            printf("  %d. %-20s (Price: %d Baht/kg | Stock: %d kg)\n",
                   j, typefruit[categoryChoice][j], prices[categoryChoice][j], stock[categoryChoice][j]);
        }

        do {
            printf("Enter Product ID (0-%d): ", MAX_PRODUCTS_PER_CATEGORY - 1);
            scanf("%d", &productId);
            while (getchar() != '\n');
            if (productId < 0 || productId >= MAX_PRODUCTS_PER_CATEGORY) {
                printf("Invalid product ID. Please try again.\n");
            }
        } while (productId < 0 || productId >= MAX_PRODUCTS_PER_CATEGORY);

        do {
            printf("Enter quantity to buy for %s (Available: %d kg): ", typefruit[categoryChoice][productId], stock[categoryChoice][productId]);
            scanf("%d", &quantityToBuy);
            while (getchar() != '\n');

            if (quantityToBuy <= 0) {
                printf("Quantity must be positive. Please try again.\n");
            } else if (quantityToBuy > stock[categoryChoice][productId]) {
                printf("Not enough stock! Only %d kg available. Please enter a lower quantity.\n", stock[categoryChoice][productId]);
            }
        } while (quantityToBuy <= 0 || quantityToBuy > stock[categoryChoice][productId]);

        stock[categoryChoice][productId] -= quantityToBuy;
        float item = (float)prices[categoryChoice][productId] * quantityToBuy;
        bill += item;
        total_items_sold[categoryChoice][productId] += quantityToBuy;

        printf("-> Added %d kg of %s. Item price: %.2f Baht. Current bill total: %.2f Baht\n",
               quantityToBuy, typefruit[categoryChoice][productId], item, bill);
    }

    printf("\n--- Bill completed. Total for this bill: %.2f Baht ---\n", bill);
    return bill;
}

void generate_daily_report(char* fruit[MAX_CATEGORIES],
                           char* typefruit[MAX_CATEGORIES][MAX_PRODUCTS_PER_CATEGORY],
                           int prices[][MAX_PRODUCTS_PER_CATEGORY],
                           int total_items_sold[][MAX_PRODUCTS_PER_CATEGORY],
                           float daily_total_revenue,
                           int final_stock[][MAX_PRODUCTS_PER_CATEGORY]) {

    int i, j;
    float category_revenue;

    printf("\n======== DAILY SALES REPORT ========\n");
    printf("Total Revenue for the Day: %.2f Baht\n", daily_total_revenue);
    printf("------------------------------------\n");

    printf("\nProducts Sold Today:\n");
    for (i = 0; i < MAX_CATEGORIES; i++) {
        category_revenue = 0.0;
        printf("--- %s ---\n", fruit[i]);
        for (j = 0; j < MAX_PRODUCTS_PER_CATEGORY; j++) {
            if (total_items_sold[i][j] > 0) {
                float product_total_sale = (float)total_items_sold[i][j] * prices[i][j];
                printf("  %-20s - Sold: %4d kg | Revenue: %8.2f Baht\n",
                       typefruit[i][j], total_items_sold[i][j], product_total_sale);
                category_revenue += product_total_sale;
            }
        }
        if (category_revenue > 0) {
            printf("  Total for %s category: %8.2f Baht\n", fruit[i], category_revenue);
        } else {
            printf("  No sales in this category today.\n");
        }
        printf("\n");
    }
    printf("------------------------------------\n");

    printf("\nRemaining Stock at End of Day:\n");
    for (i = 0; i < MAX_CATEGORIES; i++) {
        printf("--- %s ---\n", fruit[i]);
        for (j = 0; j < MAX_PRODUCTS_PER_CATEGORY; j++) {
            printf("  %s - Stock: %d kg\n",
                   typefruit[i][j], final_stock[i][j]);
        }
        printf("\n");
    }
    printf("====================================\n");
}
