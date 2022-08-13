/*
1
12
123
1234
12345
1234
123
12
1
*/
#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++,printf("\n"))
	{
		for(j=1;j<=i;j++)
			printf("%d",j);
	}
	
	for(i=n-1;i>=1;i--,printf("\n"))
	{
		for(j=1;j<=i;j++)
			printf("%d",j);
	}

    return 0;
}
