#include<stdio.h>
#include<string.h>
int main()
{
	char a[100]={'r','a','m','\0'};
	char x[100]={'k','u','m','a','r','\0'};
	char y[100],z[100];
	printf("enter the string:");
	gets(y);
	printf("\nreverse the string:%s",strrev(a));	
	printf("\ncompare the string:%d",strcmp(a,x));	
	printf("\ncopythe string:%s",strcpy(z,y));	
	printf("\nlength the string:%d",strlen(a));
	printf("\n uprcs the string:%s",strupr(a));
	printf("\n lwrcs the string:%s",strlwr(a));
	printf("\n string contanation:%s",strcat(a,x));
	return 0;
}
