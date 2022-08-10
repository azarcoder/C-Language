//count frequency of each elements
#include<stdio.h>
int main()
{
	int a[100],i,n,j,f[100],c;
	printf("Enter no of element:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		f[i]=-1;//initially -1 all elements
	}
	
	for(i=0;i<n;i++)
	{
		c=1;
		for(j=i+1;j<n;i++)
		{
			if(a[i]==a[j]) //duplicate
			{
				c++;
				f[j]=0;
			}
		}
		if(f[i]!=0)
			f[i]=c;
	}
	
	for(i=0;i<n;i++)
	{
		if(f[i]!=0)
			printf("%d occurs %d times\n",a[i],f[i]);
	}

    return 0;
}
