//C program to find area of a triangle
/*
formula, area=h*b/2
*/
#include<stdio.h>
int main()
{
	int area,h,b;
	printf("Enter height:");
	scanf("%d",&h);
	printf("Enter base:");
	scanf("%d",&b);
	area=h*b/2;
	printf("%d",area);
		
}