#include <stdio.h>
#include <stdlib.h>

int sum_arr(void);


void main() {

    int *arr_ptr;
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr_ptr = (int *)malloc(size * sizeof(int));
    memset(arr_ptr, 0, size * sizeof(int));

    for (int i = 0; i < MY_ARR_SIZE; i++) {
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &arr_ptr[i]);
    }

    int sum = sum_arr();
    printf("The sum of the given elements is: %d\n", sum);

    free(arr_ptr);

}

int sum_arr(int *a, int size) {
    int sum = 0;

    for (int j = 0; j < size; j++) {
        sum += a[j];
        printf("The address of my_arr[%d] is: %p\n", j, &a[j]);
    }

    return sum;
}
