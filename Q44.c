// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include<stdio.h>

int main(){
    int i , n , num , den;
    double sum = 1.0 ;
    printf("ENTER THE NUMBER OF TERMS : ");
    scanf("%d" , &n );
    for(i=1;i<=n;i++){
        num = 2*i + 1;
        den  =2*i + 2;
        sum += (double)num/den;
    }
    printf("Approx sum = %.1f" , sum);
    return 0;
}