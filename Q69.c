// Q69: Find the second largest element in an array.

#include<stdio.h>

int main(){
    int i, n ,j , temp;
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
printf("THE SECOND LARGEST ELEMENT IS :%d" , arr[n-2]);
    return 0;
}