#include <stdio.h>
#include <math.h>

typedef struct vegetables {    
    char name[128];
    int price;
} vegetables;
 
int main() {
    printf("Welcome to our vegetable shop\n");
    printf("Kindly enter the following details\n");
    
    int a;
    int quantity;
    vegetables veg[10]; // Declare the array of structures outside the if-else to make it accessible in both blocks

    printf("Which one of these are you:\n");
    printf("Kindly use numbers:\n");
    printf("1. Owner\n");
    printf("2. Customer\n");
    scanf("%d", &a);

    if (a == 1) { 
        for (int i = 0; i < 10; i++) {
            printf("Enter the vegetable name: ");
            scanf("%s", veg[i].name); 
            printf("Enter the vegetable price: ");
            scanf("%d", &veg[i].price);
        }
    } else if (a == 2) {
        printf("\nVegetables Available:\n");
        for (int i = 0; i < 10; i++) {
            printf("Vegetable %d: Name: %s, Price: %d\n", i + 1, veg[i].name, veg[i].price);
        }
        
        printf("\nEnter the number corresponding to the vegetable you want to buy:\n");
        int choice;
        scanf("%d", &choice);
        
        if (choice > 0 && choice <= 10) {
            printf("Enter the quantity: ");
            scanf("%d", &quantity);
            int total_price = veg[choice - 1].price * quantity;
            printf("Total price for %d of %s: %d\n", quantity, veg[choice - 1].name, total_price);
        } else {
            printf("Invalid choice. Please restart and choose a valid vegetable.\n");
        }
    } else {
        printf("Invalid choice. Please restart the program and enter 1 for Owner or 2 for Customer.\n");
    }

    return 0;
}
