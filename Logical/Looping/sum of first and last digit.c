#include<stdio.h>
int main()
{
	int n,l;
	scanf("%d",&n);
	if (n>9)
	{
		l=n%10;
		n/=10;
		while (n>9) n/=10;
		printf("%d",n+l);
		
	}
	else
		printf("%d",n);
	return 0;	
}