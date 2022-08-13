/*
1
2 6
3 7 10
4 8 11 13
5 9 12 14 15
*/
#include<stdio.h>
int main()
{
	int n,i,j,d,v;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		d=n-1;
		v=i;
		for(j=1;j<=i;j++)
		{
			printf("%d ",v);
			v+=d;
			d--;
		}
		printf("\n");
	}
    return 0;
}
