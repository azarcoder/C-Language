#include<stdio.h>
int arms(int n);
int main()
{
	int n;
	scanf("%d",&n);
	printf(arms(n)==n?"Armstrong":"Not Armstrong");
}
int arms(int n)
{
	int t,m=0,a=1,c=0,i;
	t=n;
	for(;n;c++,n/=10);
	while(t)
	{
		a=1;
		i=c;
		while(i--)
			a*=t%10;
		m+=a;
		t/=10;
	}
	return m;
}
