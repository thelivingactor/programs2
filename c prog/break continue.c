#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<=8;i++)
	{
		if(i==5)
		continue;
		printf("\n%d",i);
	}
	return 0;
}
