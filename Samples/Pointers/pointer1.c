#include <stdio.h>
int main()
{
    int var;
    int *ptr = NULL;
    printf("Enter the value:");
    scanf("%d", &var);
    ptr = &var;
    printf("THe value of pointer is :%p %d\n", ptr, *ptr);
    return 0;
}