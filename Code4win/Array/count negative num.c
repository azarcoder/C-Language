#include<stdio.h>
int main()
{
	int a[100],i,n,s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]<0)
			s++;
	}
	printf("Total negative numbers:%d\n",s);
	return 0;
}
