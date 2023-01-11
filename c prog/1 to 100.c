#include<stdio.h>
int main()
{
int i,j,k=-9,l=0;
for(i=48;i<=57;i++)
{
for(j=49;j<=57;j++)
{
printf("%c%c",i,j);
k++;
l++;
if(k==0)
{
printf("%c%c",i+1,48);
k=-9;
}
if(k==0&&j==57)
{
printf("%c%c%c",48,49,49);
}
}
}
return 0;
}
