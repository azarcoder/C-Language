/*
1
11
101
1001
11111
*/
#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	k=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==1||j==i||j==1||i==n)
				printf("1");
			else
				printf("0");
			k++;
		}
		printf("\n");
	}
    return 0;
}
