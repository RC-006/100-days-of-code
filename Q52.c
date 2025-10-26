// Q52: Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *
#include <stdio.h>

int main(){
    int i, j, stars;
    for(i = 1; i <= 5; i++){
        if(i==1 || i==5)
            stars = 1;
        else if(i==2 || i==4)
            stars=3;
        else  
            stars=5;
        for(j=1;j<=stars;j++){
            printf("*\n");
        }
        if(i<5){
            printf("\n");
        }
    }
    return 0;
}