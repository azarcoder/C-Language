/*
5
54
543
5432
54321
*/
#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i ;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}

    return 0;
}
