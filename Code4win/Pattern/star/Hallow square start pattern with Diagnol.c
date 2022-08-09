/*
*****
** **
* * *
** **
*****
Hallow square start pattern with Diagnol
*/
#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;printf("\n"),i++)	
	{
		for(j=1;j<=n;j++)
		{
			if(i==1 || i==n || j==1 || j==n || i==j || j ==(n-i+1))  //i=2 (5-2+1)=2 j==2
				printf("*");
			else
				printf(" ");
		}
	}
}
