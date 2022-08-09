/*

11111
10001
10001
10001
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
			if(i==1 || i==r ||j==1 ||j==c)
				printf("1");
			else
				printf("0");
		}
	}

    return 0;
}
