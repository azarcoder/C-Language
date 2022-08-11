/*
5
44
333
2222
11111
*/
#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=i;j<=n;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}

    return 0;
}
