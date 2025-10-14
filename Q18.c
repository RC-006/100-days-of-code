// Q18: Write a program to assign grades based on a percentage input.

#include<stdio.h>

int main(){
    int p;
    printf("ENTER YOUR PERCENTAGE :");
    scanf("%d" , &p);
    if(p>=90){
        printf("GRADE A");
    }
    else if(p<=90 && p>=80){
        printf("GRADE B");
    }
    else if(p<=80 && p>=70){
        printf("GRADE C");
    }
    else if(p<=70 && p>=60){
        printf("GRADE D");
    }
    else{
        printf("GRADE F");
    }
    return 0;
}