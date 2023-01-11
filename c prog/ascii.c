#include<stdio.h>
int main()
{
	int i;
	char a='a';
	for(i=0;i<=255;i++)
	printf("\n%c",i);
	printf("%c:%c",a,a-32);
	return 0;
}
