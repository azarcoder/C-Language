//scaler matrix multiplication
#include<stdio.h>
int main()
{
	int r,c,a[100][100],i,j,mul;
	printf("Enter rows and columns:");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	}
	//mul
	printf("Enter any number tp multiply with matrix:");
	scanf("%d",&mul);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			a[i][j]=mul*a[i][j];
	}
	//print
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
    return 0;
}
