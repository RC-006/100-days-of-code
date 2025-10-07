// Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>

int main(){
    float t;
    printf("ENTER THE TEMPERATURE IN CELSIUS :");
    scanf("%f" , &t);
    printf("THE TEMPERATURE IN FAHRENHEIT IS : %f" , t*(9.0/5.0)+32.0);
    return 0;
}