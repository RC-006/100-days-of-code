// Q54: Write a program to print the following pattern:

// *

// ***

// *****
// *******
// ***

// *

#include <stdio.h>

int main() {
    for (int i = 1; i <= 7; i += 2) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 3; i >= 1; i -= 2) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}