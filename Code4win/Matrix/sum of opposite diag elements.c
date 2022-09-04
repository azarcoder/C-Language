//sum of opposite diagnol elements
#include<stdio.h>
int main()
{
	int a[100][100],n,i,j,s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	scanf("%d",&a[i][j]);
	for(i=1;i<=n;i++)
	{
		s+=a[i][n-i+1];
		//printf("%d ",a[i][n-i+1]);//we should starts with i=1 for opp diagnol
		//printf("%d",a[i][i]);//it will print diagnol
		//printf("\n");
	}
	printf("%d",s);
}
