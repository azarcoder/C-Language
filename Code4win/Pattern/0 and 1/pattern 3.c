/*
1
01
010
1010
10101
*/
#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	k=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(k%2==1)
				printf("1");
			else
				printf("0");
			k++;
		}
		printf("\n");
	}
    return 0;
}
