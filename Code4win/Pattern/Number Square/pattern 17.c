/*

12345
21234
32123
43212
54321
*/
#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;printf("\n"),i++)
	{
		for(j=i;j>1;j--)
			printf("%d",j);
		for(j=1;j<=(n-i+1);j++)
			printf("%d",j);			
	}
	return 0;
}

