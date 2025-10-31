// Q66: Insert an element in a sorted array at the appropriate position.

#include<stdio.h>

int main(){
   int i , n , j , temp , num , position;
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
    printf("%d\n" , arr[i]);
}
printf("ENTER THE POSITION WHERE YOU WANT TO STORE THE NEW ELEMENT : ");
scanf("%d" , &position);
printf("ENTER THE NEW ELEMENT : ");
scanf("%d" , &num);
for(i=n-1;i>=position-1;i--){
arr[i+1] = arr[i];
}
arr[position - 1] = num;
for(i=0;i<n;i++){
printf("%d\n" , arr[i]);
}
return 0;
}