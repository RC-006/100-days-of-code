// Q70: Rotate an array to the right by k positions.

#include<stdio.h>

int main(){
int i , n , j , k;
printf("ENTER THE NUMBER OF ELEMENTS YOU WANT IN THE ARRAY : ");
scanf("%d" , &n);
int arr[n];
for(i=0;i<n;i++){
scanf("%d" , &arr[i]);
}
printf("ENTER THE VALUE OF K : ");
scanf("%d" , &k);
k = k%n;
int rotated[n];
for(i=0;i<n;i++){
rotated[(i+k)%n] = arr[i];
}
for(i=0;i<n;i++){
printf("%d" , rotated[i]);
}
return 0;
}