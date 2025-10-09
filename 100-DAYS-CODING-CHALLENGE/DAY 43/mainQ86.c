//Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, length = 0, isPalindrome = 1;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    // Calculate length manually (excluding newline if present)
    while (str[length] != '\0') {
        if (str[length] == '\n') break;
        length++;
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    // Output result
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

