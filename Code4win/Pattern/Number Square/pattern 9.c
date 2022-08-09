/*
01110
10001
10001
10001
01110
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
			if(i==1||i==r||j==1||j==c) 
				printf("1");
			else
				printf("0");
		}
	}
	return 0;
}

