#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the values of the three sides: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        printf("The values entered do not form a valid triangle\n");
    } else if (a == b && b == c) {
        printf("The triangle is equilateral\n");
    } else if (a == b || b == c || a == c) {
        printf("The triangle is isosceles\n");
    } else {
        printf("The triangle is scalene\n");
    }

    return 0;
}
