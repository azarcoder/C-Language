#include<stdio.h>
int main()
{
	int a[100],i,n,s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		s+=a[i];
	}
	printf("%d ",s);
    return 0;
}
