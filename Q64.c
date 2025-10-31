// Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    char number[100];
    int digit_count[10] = {0};
    int i = 0;
    scanf("%s", number);
    while (number[i] != '\0') {
        int digit = number[i] - '0';
        digit_count[digit]++;
        i++;
    }
    int max_count = 0;
    int result_digit = 0;
    for (i = 0; i < 10; i++) {
        if (digit_count[i] > max_count) {
            max_count = digit_count[i];
            result_digit = i;
        }
    }
    for (i = 0; i < 10; i++) {
        if (digit_count[i] == max_count) {
            result_digit = i;
            break; 
        }
    }
    printf("%d\n", result_digit);
    return 0;
}