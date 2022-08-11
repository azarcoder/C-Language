/*
13579
3579
579
79
9
*/
#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=(i*2)-1;
		for(j=i;j<=n;j++,k+=2)
		{
			printf("%d ",k);
		}
		printf("\n");
	}

    return 0;
}
