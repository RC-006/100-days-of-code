#include <stdio.h>
#include <string.h>

#define MAX_BITS 32 
void find_ones_complement(char binary_num[], char complement_num[]) {
    int len = strlen(binary_num);

    
    for (int i = 0; i < len; i++) {
        if (binary_num[i] == '0') {
            // If the bit is '0', the complement is '1'
            complement_num[i] = '1';
        } else if (binary_num[i] == '1') {
            // If the bit is '1', the complement is '0'
            complement_num[i] = '0';
        } 
               complement_num[len] = '\0';
}

int main() {
       char binary_num[MAX_BITS + 1]; 
    char complement_num[MAX_BITS + 1];

    printf("C Program to Find the 1's Complement\n");
    printf("------------------------------------\n");
    printf("Enter a binary number (up to %d bits): ", MAX_BITS);

       if (scanf("%s", binary_num) != 1) {
        printf("Error reading input.\n");
        return 1;
    }

    
    for (int i = 0; binary_num[i] != '\0'; i++) {
        if (binary_num[i] != '0' && binary_num[i] != '1') {
            printf("Error: Input contains non-binary characters ('%c'). Please use only '0' and '1'.\n", binary_num[i]);
            return 1;
        }
    }
    find_ones_complement(binary_num, complement_num);

   
    printf("\nOriginal Binary Number: %s\n", binary_num);
    printf("1's Complement:         %s\n", complement_num);

    return 0;
}
