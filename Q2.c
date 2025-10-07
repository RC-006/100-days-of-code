// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>

int main(){
    int a,b;
    printf("ENTER FIRST NUMBER : ");
    scanf("%d" , &a);
    printf("ENTER SECOND NUMBER : ");
    scanf("%d" , &b);
    printf("SUM: %d\n" , a+b  );
    printf("DIFF: %d\n" , a-b  );
    printf("PRODUCT : %d\n" , a*b );
    printf("QUOTIENT : %d\n" , a%b  );
    return 0;}