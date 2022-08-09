/*

01010
01010
01010
01010
01010
*/
#include<stdio.h>
int main()
{
	int r,c;
	scanf("%d%d",&r,&c);
	for(int i=1;i<=r;printf("\n"),i++)
	{
		for(int j=1;j<=c;j++)
		{
			if(j%2==0)
				printf("1");
			else
				printf("0");
		}
	}
    return 0;
}