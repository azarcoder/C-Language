/*
56789
4567
345
23
1
*/
#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		k=i;
		for(j=1;j<=i;j++,k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}

    return 0;
}
