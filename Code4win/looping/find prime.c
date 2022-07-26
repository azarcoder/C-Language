#include<stdio.h>
int main()
{
	int f=1,n,i;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
			f=0;
	}
	printf(f==1?"prime":"not prime");
    return 0;
}
