#include<stdio.h>
int main()
{
int i,n,c;
printf("enter a number:");
scanf("%d",&n);
while(n<0)
{
for(i=n;i>=0;i--)
{
printf("%d",i);
if(i==0)
{
printf("\n");
}
}
n--;
}
return 0;
}
