#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int* swap_arr(int *a, int size);

void main(){
    int *arr_ptr;
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    if (size <= 0){
        printf("kindly give a proper size\n");
        }

    arr_ptr = (int*)malloc(size * sizeof(int));
    memset(arr_ptr, 0, size * sizeof(int));
    for (int i = 0; i < size; i++) { 
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &arr_ptr[i]);
    }

    arr_ptr = swap_arr(arr_ptr, size);
    printf("Swapped array: ");
    for (int i = 0; i<size; i++) {
        printf("%d ", arr_ptr[i]);
    }
    printf("\n");

    free(arr_ptr);
}

int* swap_arr(int *a, int size){
    for (int j = 0; j < size/2; j+=1) {
        int temp = a[j];
        a[j] = a[size-1-j];
        a[size-1-j] = temp;
        printf("Swapped array: %d,%d\n",a[size-1-j], a[j]);

    }
    return a;
}