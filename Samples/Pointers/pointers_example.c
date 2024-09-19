#include <stdio.h>

int main() {
    int var = 10;
    int *ptr = &var;  // Pointer to var

    printf("Value of var: %d\n", var);
    printf("Value at ptr: %d\n", *ptr);  // Dereferencing ptr

    return 0;
}


