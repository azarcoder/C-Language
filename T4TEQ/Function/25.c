//lucas number 
#include<stdio.h>
int lucas(int n);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",lucas(n));
}
int lucas(int n)
{
	if(n==0)
		return 2;
	if(n==1)
		return 1;
	else
		return lucas(n-1)+lucas(n-2);
}