#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main() {
    int *vegetable_prices;
    int count;
    int price;

    // Prompt the user for the number of elements
    printf("Enter the number of data to be included/added: ");
    scanf("%d", &count);

    // Allocate memory for the array
    vegetable_prices = (int*)malloc(count * sizeof(int));
    if (vegetable_prices == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Get the vegetable prices from the user
    for (int i = 0; i < count; i++) {
        printf("Enter price of the vegetable %d: ", i + 1);
        scanf("%d", &vegetable_prices[i]);
    }

    // Print the array elements
    printf("\nThe elements are: ");
    printf("\n");

    for (int j = 0; j < count; j++) {
        printf("%d ", vegetable_prices[j]);
        printf("\n");

    }

    // Free the allocated memory
    free(vegetable_prices);

    return 0;
}
