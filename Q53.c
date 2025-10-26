// Q53: Write a program to print the following pattern:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *

#include<stdio.h>

int main(){
    int i , j , stars;
    for(i=1;i<=9;i++){
        if(i == 1 || i == 9 ){
            stars = 1;
        }
        if(i == 2 || i == 8 ){
            stars = 3;
        }
        if(i == 3 || i == 7 ){
            stars = 5;
        }
        if(i == 4 || i == 6 ){
            stars = 7;
        }
        if(i == 5){
            stars = 9;
        }
        for(j=1;j<=stars;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}