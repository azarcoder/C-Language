//multiply two matrices
#include<stdio.h>
int main()
{
	int r,c,a[100][100],b[100][100],mul[100][100],i,j;
	printf("Enter rows and columns:");
	scanf("%d%d",&r,&c);
	printf("1st:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	}
	printf("2nd:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&b[i][j]);
	}
	//mul
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			mul[i][j]=a[i][j]*b[i][j];
	}
	//print
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",mul[i][j]);
		printf("\n");
	}
    return 0;
}
