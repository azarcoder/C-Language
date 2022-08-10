//findout index of given n
#include<stdio.h>
int main()
{
	int a[10],n,i,s;
	printf("Enter no of element:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	printf("Enter a number to find index:");
	scanf("%d",&s);
	for(i=1;i<=n;i++)
	{
		if(a[i]==s)
		{
			break;
		}
	}
	printf("%d",i==n+1?-1:i);
}
