#include<stdio.h>
int main()
{
	int a[100],i,n,f=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
		if(a[i]%3==0 && a[i]%5==0)
		{
			printf("%d\t", a[i]);
		}
	}
	return 0;
}
