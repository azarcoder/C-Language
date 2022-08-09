/*
square number pattern
11111
11111
11111
11111
11111
*/
#include<stdio.h>
/*
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("1");
		}
		printf("\n");
	}
    return 0;
}
*/
//print row & column wise
int main()
{
	int r,c;
	scanf("%d%d",&r,&c);
	for(int i=1;i<=r;printf("\n"),i++)
	{
		for(int j=1;j<=c;j++)
		{
			printf("1");
		}
	}
	
}
