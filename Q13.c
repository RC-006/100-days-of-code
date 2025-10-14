#include<stdio.h>

int main(){
   int i;
    printf("ENTER THE YEAR : ");
    scanf("%d" , &i);
    if((i%4 == 0 && i%100 !=0) || i%400 ==0){
        printf("LEAP YEAR");
    }
    else{
        printf("NOT A LEAP YEAR");
    }
    return 0;
}