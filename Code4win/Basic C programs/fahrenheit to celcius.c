//fahrenheit to celcius
/*
formula, celcius = (f-32)*5/9;
*/
#include<stdio.h>
int main()
{
	float c,f;
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("%.2f C",c);
}