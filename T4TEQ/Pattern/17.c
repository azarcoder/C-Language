#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;printf("\n"),i++)
	{
		if(i%2==0)
			printf("%d",i+1);
		for(j=1;j<=n;j++)
			printf("%d",i);
		if(i%2)
			printf("%d",i+1);
	}
}

