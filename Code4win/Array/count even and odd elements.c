#include<stdio.h>
int main()
{
	int a[100],i,n,e=0,o=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]%2==0)
			e++;
		else
			o++;
	}
	printf("Even count:%d\n",e);
	printf("Odd count:%d",o);
	return 0;
}
