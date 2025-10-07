// Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>

int main(){
    int r;
    printf("ENTER THE RADIUS :");
    scanf("%d" , &r);
    printf("THE AREA IS :%f" , 3.14*r*r );
    printf("THE CIRCUMFERENCE IS :%f" , 2*3.14*r );
    return 0;
}