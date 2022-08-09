/*
10001
01010
00100
01010
10001
*/
#include<stdio.h>
int main()
{
	int r,c,i,j;
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;printf("\n"),i++)
	{
		for(j=1;j<=c;j++)
		{
			if(i==j || j==(c+1)-i)
				printf("1");
			else
				printf("0");
		}
	}
	return 0;
}

