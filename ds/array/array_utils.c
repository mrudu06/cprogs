#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "array_utils.h"

int get_array_size_from_user()
{
    int size;
    do {
        printf("Enter the size of the array: ");
        scanf("%d", &size);
        if (size <= 0) 
        {
            printf("Error: Size must be greater than zero\n");
        }
    } 
    while (size <= 0);
    return size;
}

int* create_new_array_with_user_input(int size)
{
    int *nums_ptr = (int*)malloc(size * sizeof(int));
    if (nums_ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    memset(nums_ptr, 0, size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &nums_ptr[i]);
    }

    return nums_ptr;
}

int* create_new_array_with_random_elements(int size)
{
    
    if (size <= 0) {
        printf("Error: Size must be greater than zero\n");
        return NULL;
    }

    int *array = (int*)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100; 
    }

    return array;
}

void initialize_array_from_user(int *nums, int size)
{
}

void initialize_array_with_random_elements(int *nums, int size)
{
}

int *clone_array(int *nums, int size)
{
    return NULL;
}

void rotate_array(int *nums, int size, int number_of_times_rotate)
{
    for (int count = 0; count < number_of_times_rotate; count++)
    {
        int last_element = nums[size - 1];
        for (int i = size - 1; i > 0; i--)
        {
            nums[i] = nums[i - 1];
        }
        nums[0] = last_element;
    }
}

void print_array(int *nums, int size)
{
    printf("Array elements: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
}
