// Q57: Find the sum of array elements.

#include<stdio.h>

int main(){
    int n , i ,sum = 0;
    printf("ENTER THE NUMBER OF ELEMENTS IN ARRAY : ");
    scanf("%d" , &n);
     int arr[n];
    for(i=0;i<n;i++){
       scanf("%d" , &arr[i]);
        sum += arr[i];
    }    
    printf("SUM IS :%d" , sum);
    return 0;
}