// Q51: Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345

#include <stdio.h>

int main() {
    int i, j, space, start;

    for(i=1;i<=5;i++) {
        for(space=1;space<=5-i;space++) {
            printf(" ");
        }
        start=6-i;
        for(j=start;j<=5;j++) {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}