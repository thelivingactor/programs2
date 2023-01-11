#include<stdio.h>
int main()
{
int n,i;
printf("enter a number:");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
printf("the given number is not a prime number");
}
else
{printf("the number is a prime number");
}
return 0;
}
return 0;
}
