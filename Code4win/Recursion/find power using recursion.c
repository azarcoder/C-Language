//find power using recursion
#include<stdio.h>
double po();
int main()
{
	double b,p,power;
	scanf("%lf%lf",&b,&p);
	power=po(b,p);
	printf("%.2lf",power);
    return 0;
}
double po(double b,double p)
{
	if(p==0)
		return 1;
	else if(p>0)
		return b * po(b,p-1);
	else
		return 1 / po(b,-p);
}
