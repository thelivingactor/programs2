#include<stdio.h>
int add();
int main()
{
int c;
c=add();
printf("add is c=%d",c);
return 0;
}
int add()
{ 
int a,b;
printf("enter a & b:");
scanf("%d %d",&a,&b);
return a+b;
}
