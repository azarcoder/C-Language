/*
1
3 2
4 5 6
10 9 8 7
11 12 13 14 15
*/
#include<stdio.h>
int main()
{
	int n,i,j,a=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",i%2?a++:a--);		
		}
		a+=i%2?i:i+1;
		printf("\n");
	}
    return 0;
}
