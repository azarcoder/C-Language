//find angles of triangle if two angles are given
/*
 sum of triangle (a+b+c) =  180deg
 formula, c=180-(a+b)
*/
#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=180-(a+b);
	printf("%d",c);
}