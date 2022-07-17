/*
check whether a triangle is Equilateral, Isosceles or Scalene

If all sides are equal --> Equilateral triangle
If any two sides are equal --> Isosceles triangle
If none sides are equal -->Scalene triangle
*/
#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a==b && b==c))
		printf("Equilateral");
	else if(a==b || b==c || c==a)
		printf("Isosceles");
	else
		printf("Scalene");
}