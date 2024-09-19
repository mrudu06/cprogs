#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter the values of a, b, c, d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if (a > b && a > c && a > d) {
        printf("The greatest number is %d\n", a);
    } else if (b > a && b > c && b > d) {
        printf("The greatest number is %d\n", b);
    } else if (c > a && c > b && c > d) {
        printf("The greatest number is %d\n", c);
    } else if (a == b && b == c && c == d) {
        printf("All the numbers are the same\n");
    } else {
        printf("The greatest number is %d\n", d);
    }
    
    return 0;
}
