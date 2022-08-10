//remove duplicate
#include<stdio.h>
int main()
{
	int n,i,j,a[10];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]==a[j])
			{
				a[j]=0;
			}
		}
		if(a[i]!=0)
			printf("%d ",a[i]);
	}
}
