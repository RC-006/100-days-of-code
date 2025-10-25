// Q43: Write a program to check if a number is a strong number.

#include<stdio.h>

int main(){
    int n , i , fact = 1 , d , sum = 0 , o;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
    o = n;
    while(n>0){
        d = n%10;
        fact = 1;
     for(i=1;i<=d;i++){
       fact *= i;
    }
     sum = sum + fact;
       n = n/10;
    }
    if(o == sum){
        printf("Strong number");
    }
    else{
        printf("Not a strong number");
    }
    return 0;
}