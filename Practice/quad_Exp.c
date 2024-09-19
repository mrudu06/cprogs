#include <stdio.h>

int main() {
    int a, b, sum, prod, quo;
    int choice;
    float diff;

    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);

    printf("1. Addition\n2. Subtraction\n3. Division\n4. Multiplication\n");
    printf("Enter the choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        sum = a + b;
        printf("The sum is: %d\n", sum);
    } else if (choice == 2) {
        diff = (float)a - b;
        printf("The difference is: %.2f\n", diff);
    } else if (choice == 3) {
        if (b != 0) {
            quo = a / b;
            printf("The quotient is: %d\n", quo);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else if (choice == 4) {
        prod = a * b;
        printf("The product is: %d\n", prod);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
