#include<stdio.h>
int main()
{
int i=5,k=0;
while(k<i)
{
for(i=5;i>=0;i--)
{
printf("%d",i);
if(i==0)
{
printf("\n");
}
}
i--;
}
return 0;
}
