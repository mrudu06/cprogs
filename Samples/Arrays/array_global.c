#include <stdio.h>
#define MY_ARR_SIZE 10

int sum_arr(void);

int a[MY_ARR_SIZE];
int size = MY_ARR_SIZE;

void main() {

    for (int i = 0; i < MY_ARR_SIZE; i++) {
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int sum = sum_arr();
    printf("The sum of the given elements is: %d\n", sum);

}

int sum_arr() {
    int sum = 0;

    for (int j = 0; j < size; j++) {
        sum += a[j];
        printf("The address of my_arr[%d] is: %p\n", j, &a[j]);
    }

    return sum;
}
