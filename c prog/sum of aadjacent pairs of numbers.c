#include<stdio.h>
int main()
{
int i,j,n;
int arr[1000];
printf("enter the array size n:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("the array arr[%d]=(",n);
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
if(i!=n-1)
{
printf(",");
}
}
printf(")");
for(i=0;i<n;i=i+2)
{
printf("\n %d(%d+%d)",arr[i]+arr[i+1],arr[i],arr[i+1]);
}
return 0;
}
