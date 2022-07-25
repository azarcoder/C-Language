//sum of first and last digit
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int f,l;
	l=n%10;
	f=n;
	while(f>=10) //123>=10 12>=10
	{
		f/=10; //1+
	}
	printf("%d",f);
}