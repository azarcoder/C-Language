//2d sum of all elements diagnol
#include "stdio.h"
int main()
{
	int n[50][100],i,j,s=0,a;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			scanf("%d",&n[i][j]);
		}
	}
	for(i=1;i<=a;i++,printf("\n"))
	{
		for(j=1;j<=a;j++)
		{
				if(i==j || j==a-i+1)
				s=s+n[i][j];
				printf("%d ",n[i][j]);
		}
	}
	printf("%d",s);
}