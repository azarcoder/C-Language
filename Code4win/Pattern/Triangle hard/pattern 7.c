/*
1
21
123
4321
12345
*/
#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i&1)
		{
			for(j=1;j<=i;j++)
				printf("%d",j);
		}
		else{
			for(j=i;j>=1;j--)
				printf("%d",j);
		}
		printf("\n");
	}
    return 0;
}
