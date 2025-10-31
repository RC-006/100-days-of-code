// Q68: Delete an element from an array.

#include <stdio.h>
int main()
{
   int array[100], position, i, n;
   printf("ENTER THE NUMBER OF ELEMENTS YOU WANT IN THE ARRAY : \n");
   scanf("%d", &n);
   for (i=0;i<n;i++){
      scanf("%d", &array[i]);
    }
   printf("ENTER THE POSITION FROM WHICH THE ELEMENT HAS TO BE DELETED : \n");
   scanf("%d", &position);
if( position >= n+1 )
      printf("DELETION IS NOT POSSIBLE.\n");
   else
   {
      for(i=position;i<n-1;i++){
         array[i] = array[i+1];
        }
      printf("Resultant array is\n");
      for(i=0;i<n-1;i++){
         printf("%d\n", array[i]);
        }
   }
   return 0;
}