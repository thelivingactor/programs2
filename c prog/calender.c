#include<stdio.h>
int main()
{
int date,month,year,odd=0,rem,lrem,remyear=0,sum=0,mon=0;
//remyear = remaining year
int arr[1000]={31,28,31,30,31,30,31,31,30,31,30,31};
printf("date:");
scanf("%d",&date);
printf("month:");
scanf("%d",&month);
printf("year:");
scanf("%d",&year);
year=year-1;
month=month-1;
if(year%4==0&&year%100!=0||year%400==0)
{
odd=0;
}
else
{
remyear=year%400;
if(remyear<=200&&remyear>100)
{
odd =5;
}
else if(remyear<=300&&remyear>200)
{
odd=3;
}

else if(remyear>=300&&remyear<400)
{
odd=1;
}
else{
odd=0;
}
rem=year%400;
rem=rem%100;
lrem=((rem/4)*2)+rem-((rem/4));
odd=odd+lrem%7;
}
for(mon=0;mon<month;mon++)
{
sum=sum+arr[mon];
}
sum=sum+date;
odd=odd+sum%7;

if (odd<7)
{
printf("\n the odd is %d",odd);
}
else
{
odd=odd/7;
printf("\n the odd is %d",odd);
}

if(odd==0)
{
printf("\nsunday");
}
if(odd==1)
{
printf("\nmonday");
}
if(odd==2)
{
printf("\ntuesday");
}
if(odd==3)
{
printf("\nwednesday");
}
if(odd==4)
{
printf("\nthursday");
}
if(odd==5)
{
printf("\nfriday");
}
if(odd==6)
{
printf("\nsaturday");
}


return 0;
}



