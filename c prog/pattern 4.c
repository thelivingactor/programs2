#include<stdio.h>
int main()
{
int n,i,j;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}
for(i=n;i>=1;i--)
{
for(j=i;j>=1;j--)
{
printf("%d",j);
}
printf("\n");
}
return 0;
}