// Q58: Find the maximum and minimum element in an array.

#include<stdio.h>

int main(){
    int i, n ;
    printf("ENTER THE NUMBER OF ELEMENTS IN ARRAY : ");
    scanf("%d", &n);
   int arr[n];
   for(i=0;i<n;i++){
    scanf("%d" , &arr[i]);
   }
   int max = arr[0] , min = arr[0];
   for(int i = 1; i<n;i++){
    if(arr[i]>max){
        max = arr[i];
    }
    if(arr[i]<min){
        min = arr[i];
    }
   }
printf("max = %d, min = %d" , max , min);
    return 0;
}c