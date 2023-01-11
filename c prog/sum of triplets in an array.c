#include<stdio.h>
int main()
{
int x,n,i,sum,j,k;
int arr[n];
printf("enter the number of elements in the array=");
scanf("%d",&n);
printf("eneter the sum of triplets =");
scanf("%d",&x);
printf("enter the element :");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("arr[%d]=[",n);
for (i=0;i<n;i++)
{
printf("%d",arr[i]);
if(i!=n-1)
{
printf(",");
}
}
printf("]");
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
for(k=j+1;k<n;k++)
{
if(x==arr[i]+arr[j]+arr[k])
{
printf("\nthe triplets are %d %d %d",arr[i],arr[j],arr[k]);
printf("\n found %d+%d+%d=%d ",arr[i],arr[j],arr[k],arr[i]+arr[j]+arr[k]);
}
}
}
}
return 0;
}
