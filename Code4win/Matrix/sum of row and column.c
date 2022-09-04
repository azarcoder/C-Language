//sum of row and column
#include<stdio.h>
int main()
{
	int a[10][10],n,i,j,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	//row
	for(i=0;i<n;i++)
	{
		s=0;
		for(j=0;j<n;j++)
		{
			s+=a[i][j];
		}
		printf("sum of  row %d : %d\n",i+1,s);
	}
	printf("-----------------------\n");
	//col
	for(i=0;i<n;i++)
	{
		s=0;
		for(j=0;j<n;j++)
		{
			s+=a[j][i];
		}
		printf("sum of  column %d : %d\n",i+1,s);
	}
}
