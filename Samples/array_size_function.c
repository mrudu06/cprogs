#include <stdio.h>
#define MY_ARR_SIZE 10

int sum_arr(int my_arr[], int size);

void main() {
    int a[MY_ARR_SIZE];

    for (int i = 0; i < MY_ARR_SIZE; i++) {
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int sum = sum_arr(a, MY_ARR_SIZE);
    printf("The sum of the given elements is: %d\n", sum);

}

int sum_arr(int my_arr[], int size) {
    int sum = 0;

    for (int j = 0; j < size; j++) {
        sum += my_arr[j];
        printf("The address of my_arr[%d] is: %p\n", j, &my_arr[j]);
    }

    return sum;
}
