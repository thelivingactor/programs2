#include <stdio.h>
int main()
{
	int a,b,c,m,n,o;
	printf("a=%d,b=%d,c=%d");
	scanf("%d%d%d",&a,&b,&c);
	m = b<a && a>c ? a : (b>c ? b:c);
	n = b>a && a<c ? a : (b<c ? b:c) ;
	o = a>b && b>c ? b : (a>c && c>b) ? c : (b>a &&
	 a>c ? a : b);
	printf("order %d%d%d",m,o,n);
	
}
