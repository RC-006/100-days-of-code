// Q61: Search for an element in an array using linear search.

#include<stdio.h>

int main(){
    int i , n , num ,j;
    printf("ENTER THE NUMBER OF ELEMENTS YOU WANT IN THE ARRAY : ");
    scanf("%d" , &n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d" , &arr[i]);
    }
    printf("ENTER THE NUMBER YOU WANT TO SEARCH : ");
    scanf("%d" , &num);
    for(j=0;j<n;j++){
        if(arr[j] == num){
            printf("found at index :%d" , j);
        }
    }
    return 0;
}