/*
12345
23451
34521
45321
54321
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
		for(j=i-1;j>=1;j--)
			printf("%d",j);			
	}
	return 0;
}

