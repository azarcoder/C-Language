/*
11011
11011
00000
11011
11011
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
			if(j%3==0 || i==3)
				printf("0");
			else
				printf("1");
		}
	}
	return 0;
}

