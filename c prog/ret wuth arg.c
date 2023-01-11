#include<stdio.h>
int main()
{
int a,b,c;
printf("enter a & b:");
scanf("%d %d",&a,&b);
c=add(a,b);
printf("add is c=%d",c);
}
int add(int x,int y)
{
return x+y;
}

