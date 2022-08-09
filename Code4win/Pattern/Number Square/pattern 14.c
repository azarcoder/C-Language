/*
55555
54444
54333
54322
54321
*/
#include<stdio.h>
int main()
{
	int r,c,i,j,s=0;
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;printf("\n"),i++)
	{
		for(j=c;j>c-i;j--)
			printf("%d",j);	
		for(j=1;j<=c-i;j++)
			printf("%d",(r-i+1));			
	}
	return 0;
}

