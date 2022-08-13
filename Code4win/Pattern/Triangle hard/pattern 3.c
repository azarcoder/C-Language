/*
1
131
13531
1357531
135797531
*/
#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(i*2-1);j++)
		{
			if(j%2==1)
				printf("%d",j);
		}
		for(j=(i-1)*2;j>=1;j--)
		{
			if(j%2==1)
				printf("%d",j);	
		}	
		printf("\n");
	}

    return 0;
}
