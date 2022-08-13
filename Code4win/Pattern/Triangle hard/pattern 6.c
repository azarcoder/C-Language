/*
1
32
4543
567654
67898765
*/
#include<stdio.h>
int main()
{
	int n,i,j,v;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		v=i+1;
		for(j=3;j<=i;j++)
		{
			printf("%d",v);
			v++;
		}
		for(j=(i*2)-1;j>=i;j--)
			printf("%d",j);
		printf("\n");
	}

    return 0;
}
