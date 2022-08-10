//delete duplicate elements
#include<stdio.h>
int main()
{
	int k,a[100],i,n,j,c;
	printf("Enter no of element:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n-1;k++)
				{
					a[k]=a[k+1];
				}
				n--;
				j--;
			}
		}
	}
	for(i=1;i<n;i++)
		printf("%d\t",a[i]);
    return 0;
}
