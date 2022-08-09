/*
12345
23455
34555
45555
55555
*/
#include<stdio.h>
int main()
{
	int r,c,i,j,s=0;
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;printf("\n"),i++)
	{
		for(j=i;j<=c;j++)
			printf("%d",j);
		for(j=i;j>1;j--)
			printf("%d",c);			
	}
	return 0;
}

