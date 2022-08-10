//copy all elements from an array to another array
#include<stdio.h>
int main()
{
	int a[100],i,n,b[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=1;i<=n;i++)
		printf("%d ",b[i]);
    return 0;
}

