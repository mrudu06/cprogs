#include <stdio.h>

int main() {
    int a[10];

    for (int i = 0; i < 10; i++) {
        printf("Enter the Number for element %d: ", i + 1);
        scanf("%d", &a[i]);
        printf("The address of a[%d] is: %p\n", i, &a[i]);
    }

    int sum = 0;

    for (int j = 0; j < 10; j++) {
        sum = sum + a[j];
        printf("The address of a[%d] is: %p\n", j, (void*)&a[j]);
    }

    printf("The sum of the given elements is: %d\n", sum);

    return 0;
}
