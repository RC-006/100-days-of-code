// Q59: Count even and odd numbers in an array.

#include<stdio.h>

int main(){
    int i , j ,even =0, odd=0;
  printf("ENTER THE NUMBER OF ELEMENTS YOU WANT IN THE ARRAY : ");
  scanf("%d" , &j);
 int arr[j];
  for(i=0;i<j;i++){
    scanf("%d" , &arr[i]);
if(arr[i]%2 == 0){
    even++;
}
else{
    odd++;
}
    }
    printf("even numbers : %d\n" , even);
    printf("odd numbers : %d\n" , odd);
    return 0;
}