// Q62: Reverse an array without taking extra space.

#include <stdio.h>

int main() {
    int n, i ,j, temp, start = 0;
  printf("ENTER THE NUMBER OF ELEMENTS YOU WANT IN THE ARRAY : ");
  scanf("%d" , &n);
int arr[n];
int size = sizeof(arr)/sizeof(arr[0]);
    int end = size - 1;
    for(j=0;j<n;j++){
        scanf("%d" , &arr[j]);
    }
    printf("Original array: ");
    for (i=0;i<size;i++) {
        printf("%d ", arr[i]);
    }
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printf("Reversed array : ");
    for (i=0;i<size;i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}