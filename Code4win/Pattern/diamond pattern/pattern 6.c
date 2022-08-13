#include<stdio.h>
int main()
{
	int n,i,j;
	for(i=1,scanf("%d",&n);i<=n;i++,printf("\n"))
	{
		for(j=1;j<=n;j++)
		{
			if(i==j || i+j==n+1)
				printf("%d",i);
			else
				printf(" ");
		}
	}
    return 0;
}
