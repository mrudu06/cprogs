#include <stdio.h>
#include <math.h>

int main() {
    
    double a, b, c, discriminant, root1, root2;

    
    printf("Enter the coefficients of the quadratic equation: ");
    scanf("%d %d %d", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    int discriminantState;

    if (discriminant > 0) {
        discriminantState = 1;
    } else if (discriminant == 0) {
        discriminantState = 0;
    } else {
        discriminantState = -1;
    }

    switch (discriminantState) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("The roots of the quadratic equation are %.2lf and %.2lf.\n", root1, root2);
            break;
        case 0:
            root1 = root2 = -b / (2 * a);
            printf("The roots of the quadratic equation are %.2lf and %.2lf.\n", root1, root2);
            break;
        case 2:
            printf("The quadratic equation has no real roots.\n");
            break;
        default:
            printf("Error in discriminant calculation.\n");
    }

    return 0;
}
()