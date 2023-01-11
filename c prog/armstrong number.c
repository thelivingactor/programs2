#include<stdio.h>
int main()
{
int n,temp,j,num;
printf("eneter a number");
scanf("%d",&n);
n=num;
while(num>0)
        {
            temp =num%10;
            num=num/10;
            j=j+(temp*temp*temp);
        }
        if(j==n)
        {
        printf("the number is armstrong number");
}
return 0;
}
