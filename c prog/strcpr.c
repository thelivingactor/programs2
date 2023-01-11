#include<stdio.h>

void add();
void add()
{
int a,b,c;
printf("\nenter two numbers:");
scanf("%d %d",&a,&b);
c=a+b;
printf("the addition is %d",c);
return 0;
}
int main()
{
int i,n;
printf("\nenter the limit:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
add();
}
add();
}
