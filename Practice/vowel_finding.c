#include <stdio.h>
#include <stdbool.h>

bool charInString(char c, const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            return true;
        }
    }
    return false;
}

int main() {
    char str[] = "Hello, World!";
    char target[] = "aeiou";
    bool found = false;

    // Loop through each character in the target string
    for (int i = 0; target[i] != '\0'; i++) {
        if (charInString(target[i], str)) {
            found = true;
            break;
        }
    }

    if (found) {
        printf("One of the characters in \"%s\" is in the string \"%s\".\n", target, str);
    } else {
        printf("None of the characters in \"%s\" are in the string \"%s\".\n", target, str);
    }

    return 0;
}
