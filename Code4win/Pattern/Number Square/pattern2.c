/*

11111
00000
11111
00000
11111
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
			if(i%2==0)
				printf("0");
			else
				printf("1");
		}
	}

    return 0;
}
