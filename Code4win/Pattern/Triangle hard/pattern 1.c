/*
1
123
12345
1234567
123456789
*/
#include<stdio.h>
int main()
{
	int n,i,j,s=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(i*2-1);j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}

    return 0;
}
