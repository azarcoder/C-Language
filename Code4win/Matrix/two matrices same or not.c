//two matrices same or not
#include<stdio.h>
int main()
{
	int r,c,a[100][100],b[100][100],f=1,i,j;
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
	//checking
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]!=b[i][j])
			{
				f=0;
				break;
			}
		}
	}
	printf(f==1?"EQUAL":"NOT EQUAL");
    return 0;
}
