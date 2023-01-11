#include<stdio.h>
int main()
{
int rows,i,j;
printf("enter the rows:");
scanf("%d",&rows);
for(i=rows;i>=0;i--)
{
for(j=i;j>=0;j--)
{
printf("%d",j);
}
printf("\n");
}
return 0;
}
