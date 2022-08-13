/*
1
24
135
2468
13579
*/
#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=i&1?1:2;
		for(j=1;j<=i;j++,k+=2)
		{
			printf("%d",k);
		}
		printf("\n");
	}

    return 0;
}
