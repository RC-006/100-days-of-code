// Q60: Count positive, negative, and zero elements in an array.

#include<stdio.h>

int main(){
    int i , j , neg=0 , pos =0, zero =0;
  printf("ENTER THE NUMBER OF ELEMENTS YOU WANT IN THE ARRAY : ");
  scanf("%d" , &j);
 int arr[j];
  for(i=0;i<j;i++){
    scanf("%d" , &arr[i]);
    if(arr[i] > 0){
        pos++;}
        else if(arr[i] == 0){
            zero++;
        }
    else{
            neg++;
        }
    }
    printf("positive numbers : %d\n" , pos);
    printf("negative numbers : %d\n" , neg);
    printf("zeroes: %d" , zero);
    return 0;
}