#include <stdio.h>
#include <string.h>

int main() {
    char sex[128], maritalstatus[128];
    int age;
    
    printf("Kindly enter the following details:\n");
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your sex: ");
    scanf(" %s", sex);  
    
    printf("Enter your marital status: ");
    scanf(" %s", maritalstatus);

    if (strcmp(maritalstatus, "married") == 0) {
        printf("The driver should be insured\n");
    } else if (strcmp(maritalstatus, "unmarried") == 0 && age > 30 && strcmp(sex, "Male") == 0) {
        printf("The driver will be insured\n");
    } else if (strcmp(sex, "Female") == 0 && age > 25 && strcmp(maritalstatus, "unmarried") == 0) {
        printf("The driver should be insured\n");
    } else {
        printf("The driver will not be insured\n");
    }

    return 0;
}
