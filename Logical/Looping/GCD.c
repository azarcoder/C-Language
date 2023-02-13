#include<stdio.h>
int main()
{
	int n,n2,i=1,gcd;
	scanf("%d %d",&n,&n2);
	while(i<=n && i<=n2)
	{
		if(n%i==0 && n2%i==0)
			gcd =i;
		i++;
	}
	printf("%d",gcd);
	return 0;
}