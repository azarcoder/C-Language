/*
55555
4444
333
22
1
*/
#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=i;j>0;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}

    return 0;
}
