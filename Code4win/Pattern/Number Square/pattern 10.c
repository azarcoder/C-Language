/*
11111
22222
33333
44444
55555
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
			 printf("%d",i);
		}
	}
	return 0;
}

