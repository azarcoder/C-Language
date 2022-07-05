//C program to find diameter, circumference and area of circle
/*

diameter = 2r
circumference = 2*pi*r
area = pi*r^2


*/
#include<stdio.h>
int main()
{
	float r,d,c,a;
	printf("Enter radius:");
	scanf("%f",&r);
	d=2*r;
	c=2*3.14*r;
	a=3.14*r*r;
	printf("Diameter : %.2f\n Circumference : %.2f\n Area : %.2f ",d,c,a);
	
}