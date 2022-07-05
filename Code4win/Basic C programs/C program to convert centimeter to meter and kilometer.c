//C program to convert centimeter to meter and kilometer
/*
1 meter = 1000cm
1km = 100000cm
*/
#include<stdio.h>
int main()
{
	float cm,m,km;
	printf("Enter cm:");
	scanf("%f",&cm);
	m = cm/100;
	km = cm/100000;
	printf("meter : %.2f meter\nkilometer : %.2f kilometer",m,km);
	
}