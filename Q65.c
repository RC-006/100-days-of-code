//  Q65: Search in a sorted array using binary search.

#include<stdio.h>

int main(){
    int i , n , j , temp , num;
    printf("ENTER THE NUMBER OF ELEMENTS YOU WANT IN THE ARRAY : ");
    scanf("%d" , &n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d" , &arr[i]);
    }
    for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
       if(arr[i]>arr[j]){
        temp = arr[i];
        arr[i] = arr[j];
       arr[j] = temp;
       } 
    }
}
for(i=0;i<n;i++){
    printf("\n%d" , arr[i]);}
printf("\nENTER THE ELEMENT YOU WANT TO SEARCH IN THE ARRAY : ");
scanf("%d" , &num);
for(i=0;i<n;i++){
    if(num == arr[i]){
        printf("FOUND AT INDEX :%d" , i);
        break;
    }
}
    return 0;
}