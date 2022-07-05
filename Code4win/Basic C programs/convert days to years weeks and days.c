/* 
convert days to years weeks and days

1 year = 365 days (Ignoring leap year)
1 week = 7 days

Using this we can define our new formula to compute years and weeks.
year = days / 365
week = (days - (year * 365)) / 7)
days = days - ((years * 365) + (weeks * 7))
*/
#include<stdio.h>
int main()
{
	int d,days,y,w;
	printf("Enter the days:");
	scanf("%d",&d);
	y=d/365;
	w=(d-(y*365))/7;
	days = d - ((y * 365) + (w * 7));
	printf("Year:%d\nWeeks:%d\nDays:%d",y,w,days);
}