// Q55: Write a program to print all the prime numbers from 1 to n.

#include<stdio.h>
int main(){
    int i , n , j, p;
    printf("ENTER THE NUMBER : ");
    scanf("%d" , &n);
    for(i =2;i<=n;i++){
        p = 1;
        for(j=2;j*j<=i;j++){
            if(i%j == 0){
                p = 0;
                break;
            }
    }
    if(p == 1){
        printf("%d " , i);
    }
}
    return 0;
}