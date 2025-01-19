#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_array_size()
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

int* get_array_elements(int size)
{
    int *nums_ptr = (int*)malloc(size * sizeof(int));
    memset(nums_ptr, 0, size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &nums_ptr[i]);
    }

    return nums_ptr;
}

int* rotate_array(int* nums, int size,int number_of_times_rotate)
{
    int count = 0;
    
    while (number_of_times_rotate < count)
    {
        int last_element = nums[size - 1];
    for (int i = size - 1; i > 0; i--)
    {
        nums[i] = nums[i - 1];
    }
    nums[0] = last_element;
    count++;

    return nums;
    }
}

void print_array(int *rotated_array, int size)
{
    printf("Array elements: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", rotated_array[i]);
    }
    printf("\n");
}

int main()
{
    int number_of_times_rotate;
    int size = get_array_size();
    int *array = get_array_elements(size);
    int *roated_array = rotate_array(array, size, number_of_times_rotate);

    printf("Enter the number of times to rotate the array: ");
    scanf("%d", &number_of_times_rotate);


    print_array(array, size);
    return 0;

    
}