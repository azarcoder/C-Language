/*
1
22
333
2222
11111
*/
#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;printf("\n"),i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i<=(n/2))
				printf("%d",i);
			else
				printf("%d",(n-i+1));
		}
	}
    return 0;
}
