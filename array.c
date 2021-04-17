
#include <stdio.h> 
int main()
{
   int array[100],c, n, value;
 
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
 
    
   printf("Enter the value to insert\n");
   scanf("%d", &value);
 array[n]=value;
 
   for (c = 0; c <= n; c++)
      printf("%d\n", array[c]);
 
   return 0;
}