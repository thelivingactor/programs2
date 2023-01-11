#include<stdio.h>
int main()
{
int arr[5]={1,2,3,4,5};
int i;
for(i=0;i<5;i=i+2)
{
printf("%d",arr[i]+arr[i+1]);
}
return 0;
}
