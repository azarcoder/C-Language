//cube any number
#include<stdio.h>
int c();
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",c(n));
    return 0;
}
int c(int n)
{
	return n*n*n;
}
