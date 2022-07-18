//remove duplicate
#include<stdio.h>
int main()
{
	int n,i,a[10],j,m;
	printf("Enter the no of element:");
	scanf("%d",&n);
	scanf("%d",&a[1]);
	m=a[1];
	for(i=2;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(m<a[i])
			m=a[i];
	}
	m++;
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]==a[j])
				a[j]=m;
		}
		if(a[i]!=m)
			printf("%d ",a[i]);
	}
}
