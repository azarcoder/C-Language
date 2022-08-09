/*
11111
11111
11011
11111
11111
*/
#include<stdio.h>
int main()
{
	int r,c;
	int cen_row,cen_col;
	scanf("%d%d",&r,&c);
	
	cen_row = (r+1)/2;
	cen_col = (c+1)/2;
	for(int i=1;i<=r;printf("\n"),i++)
	{
		for(int j=1;j<=c;j++)
		{
			if(cen_row==j && cen_col==i)
				printf("0");
			else
				printf("1");
		}
	}

    return 0;
}
