#include <stdio.h>

int main()
{
    int time, principle;
    float si, percentage;
    int count;
    count = 0;

    while (count < 3) 
    { 
        printf("\nPlease enter the following details:");
        printf("\nEnter the values of principle, interest rate, time: ");
        
        
        scanf("%d%f%d", &principle, &percentage, &time);
        
        si = ((float)principle * time * percentage) / 100; 
        printf("The simple interest is %f\n", si); 
        
        count = count + 1;
    }

    return 0;
}
