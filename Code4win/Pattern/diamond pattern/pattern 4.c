/*
1
121
12321
1234321
123454321
1234321
12321
121
1
*/
#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;printf("\n"),i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);	
		}
		for(j=i-1;j>=1;j--)
		{
			printf("%d",j);	
		}
		
	}
	
	for(i=n-1;i>=1;i--,printf("\n"))
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);	
		}
		for(j=i-1;j>=1;j--)
		{
			printf("%d",j);	
		}
	}

    return 0;
}
