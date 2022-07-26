//find prime factors
#include<stdio.h>
int main()
{
	int f=1,n,i,j;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			f=1;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					f=0;
					break;	
				}	
			}
			if(f==1)
				printf("%d ",i);	
		}
	}
   return 0;
}
