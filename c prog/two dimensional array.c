#include<stdio.h>
int main()
{
	int i,j,m,n;
	int a[100][100],b[100][100],c[100][100];
	printf("enter row and column");
	scanf("%d%d",&m,&n);
	for(i=0;i<=m;i++)
	{
	for(j=0;j<=n;j++)
	
	{
		printf("a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
	}
}
		for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
		printf("b[%d][%d]",i,j);
		scanf("%d",&b[i][j]);
	
}
}
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		printf("\t%d",c[i][j]);
	}
	printf("\n");
}
	return 0;
}
