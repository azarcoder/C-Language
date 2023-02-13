#include<stdio.h>
int main()
{
	int n;
	double i,p=0.1;
	scanf("%d",&n);
	for(i=1;(i*i*i)<=n;i++);
	for(i--;(i*i*i)<n;i+=p);
	printf("%lf",i);
	return 0;
}