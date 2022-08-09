/*
12345
23456
34567
45678
56789
*/
#include<stdio.h>
int main()
{
	int r,c,i,j,s=0;
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;printf("\n"),i++)
	{
		for(j=i;j<c+i;j++)
		{
			printf("%d",j);				
		}
	}
	return 0;
}

