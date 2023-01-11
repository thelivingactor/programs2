#include<stdio.h>
int main()
{
	int i,sum=0,num,count;
	printf("enter the count:");
	scanf("%d",&count);
	for(i=0;i<=count;i++)
	{
		printf("enter the number:");
		scanf("%d",&num);
	sum +=num;
}
printf("sum:%d",sum);
	return 0;
}
