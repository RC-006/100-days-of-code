// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>

int main(){
   int a , b ; 
    printf("ENTER THE LENGTH :\n ");
    scanf("%d" , &a);
    printf("ENTER THE BREADTH :\n ");
    scanf("%d" , &b);
    printf("THE PERIMETER IS :%d\n" , 2*(a+b));
    printf("THE AREA IS :%d\n" , a*b );
    return 0;
}