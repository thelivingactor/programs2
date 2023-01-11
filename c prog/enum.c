#include<stdio.h>
int main()
{
enum point {a=10,b=20};
enum point c;
c=a;
printf("\n c %d",c);
void *p;
p=&c;
printf("\n*p :%d",*(int*)p);
return 0;
}
