/*
1
121
12321
1234321
123454321
*/
#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d",j);
		for(j=i-1;j>=1;j--)
			printf("%d",j);
		printf("\n");
	}

    return 0;
}
