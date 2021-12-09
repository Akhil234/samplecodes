#include<stdio.h>
int main()
{
int array[100],x,y,position,c,value,i,n;
printf("enter the number of element in the array");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&array[c]);
printf("enter the position where to insert the element");
scanf("%d",&position);
printf("enter the number to be inserted");
scanf("%d",&value);
for (i = n - 1; i >= position - 1; i--)
      array[i] = array[i+1];
      array[position-1] = value;
 
   printf("Resultant array is\n");
 
   for (i = 0; i <= n; i++)
      printf("%d\n", array[i]);
 
   return 0;
}
