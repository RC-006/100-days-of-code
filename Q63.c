// Q63: Merge two arrays.

#include<stdio.h>

int main(){
   int i , n , j , c;
    printf("ENTER THE NUMBER OF ELEMENTS YOU WANT IN THE FIRST ARRAY : ");
    scanf("%d" , &n);
    int arr1[n];
    for(i=0;i<n;i++){
        scanf("%d" , &arr1[i]);
    }
    printf("ENTER THE NUMBER OF ELEMENTS YOU WANT IN THE SECOND ARRAY : ");
    scanf("%d" , &j);
    int arr2[j];
    for(i=0;i<j;i++){
        scanf("%d" , &arr2[i]);
    }
    int merged[n+j];
    for(i=0;i<n;i++){
        merged[i] = arr1[i];
    }
    for(c=0;c<j;c++){
         merged[i+c] = arr2[c];
    }
   for(i=0;i<n+j;i++){
    printf("%d\t" , merged[i]);
   }
    return 0;
}