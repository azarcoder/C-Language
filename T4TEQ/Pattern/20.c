#include<stdio.h>
int main()
{
	int n,i,j,a=1;
	scanf("%d",&n);
	for(i=1;i<=n;printf("\n"),i++)
	{
		if(i%2==0)
		{
			for(j=1;j<=n;j++)
				printf("%2d ",a--);
			a+=n+1;
		}
		else
		{
			for(j=1;j<=n;j++)
				if(i+j==2)
				printf("%-2d ",a++);
				else
				printf("%2d ",a++);
			a+=n-1; //a=6+5-1 10
		}
	}
	return 0;
}
