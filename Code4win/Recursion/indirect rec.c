#include<stdio.h>
void one(int n);
void two(int n);
int main()
{
	int n;
	scanf("%d",&n);
	one(n);
    return 0;
}
void one(int n)
{
	int i;
	for(i=1;i<=n;i++)
		printf("%d ",i);
		two(n);
}
void two(int n)
{
	int i;
	n--;
	for(i=n;i>0;i--)
		printf("%d ",i);
}

