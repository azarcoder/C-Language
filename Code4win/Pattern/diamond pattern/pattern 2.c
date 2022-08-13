/*
1
123
12345
1234567
123456789
1234567
12345
123
1
*/
#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n*2;printf("\n"),i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2)
				printf("%d",j);	
		}
	}
	for(i=(n*2)-2;i>=1;i--,printf("\n"))
	{
		for(j=1;j<=i;j++)
		{
			if(i%2)
			printf("%d",j);
		}
	}

    return 0;
}
