#include<stdio.h>
#define LEAP_YEAR(y) y%100!=0&&y%4==0||y%400==0
 
int main()
{
	int year;
	scanf("%d",&year);
	if(LEAP_YEAR(year))
		{printf("L");}
	else
		{printf("N");}
}  