//  Q67: Insert an element in an array at a given position.

#include<stdio.h>
int main(){
int i,n,arr[100] , num, position;
printf("NUMBER OF TERMS IN ARRAY : ");
scanf("%d" , &n);
for(i=0;i<n;i++){
scanf("%d" , &arr[i]);
}
printf("ENTER THE POSITION WHERE THE ELEMENT HAS TO BE INSERTED : ");
scanf("%d" , &position);
printf("ENTER THE ELEMENT THAT HAS TO BE INSERTED : ");
scanf("%d" , &num);
for(i=n-1;i>=position;i--)
arr[i+1] = arr[i];
arr[position] = num;
printf("THE RESULTANT ARRAY IS : \n");
for(i=0;i<=n;i++){
    printf("%d\n" , arr[i]);
}
return 0;
}