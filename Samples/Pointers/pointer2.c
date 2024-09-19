#include <stdio.h>

int main()
{
    int var;
    int numbers[5] = {1, 2, 3, 4, 5};
    int *ptr = NULL;

    ptr = numbers;
    for (int i = 0; i < 5; i++)
    {
        printf("THe address of the element  %d:%p\n", i, (ptr + i));
        printf("THe value of the element thr pointer variable is :%d\n", (*ptr + i));
        printf("THe address of the pointer is : %d\n", (&ptr + i));
    }

    return 0;
}
