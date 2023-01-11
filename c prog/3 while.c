#include<stdio.h>
int main()
{
int i=0,j=0,k=0;
while(i<4)
{
while(j<4)
{
while(k<4)
{
printf("%d %d %d\n",i,j,k);
k++;
i++;
j++;
}
}
}
return 0;
}
