#include<stdio.h>
int main()
{
float avg;
int sum=0,a[1000],n,i;
printf("enter the size of the array");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
sum=sum+a[i];
printf("the sum is %d",sum);
avg=(float)sum/(float)n;
printf("the avg is %f",avg);
return 0;
}
