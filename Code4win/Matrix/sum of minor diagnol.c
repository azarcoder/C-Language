//sum of minor diagnol
#include<stdio.h>
int main()
{
	int a[10][10],n,i,j,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				s+=a[i][j];
			}
		}
	}
	printf("%d",s);
}