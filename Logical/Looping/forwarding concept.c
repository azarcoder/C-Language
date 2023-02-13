#include<stdio.h>
int main()
{
	int n,j=1,t;
	scanf("%d",&n);
	t=n;
	while(n)
	{
		j*=10;
		n/=10;
	}
	j/=10;
	while(j)
	{
		printf("%d\n",t/j%10);
		j/=10;
	}
	return 0;
}