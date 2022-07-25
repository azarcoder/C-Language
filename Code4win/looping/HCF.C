//HCF (GCD)
#include<stdio.h>
int main()
{
	int a,b,c,i,hcf=1;
	scanf("%d%d",&a,&b);
	c=a<b?a:b;
	for(i=1;i<=c;i++)
	{
		if(a%i==0 && b%i==0)
			hcf=i;
	}
	printf("%d",hcf);
    return 0;
}
