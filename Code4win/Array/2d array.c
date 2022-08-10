//array 2d
#include<stdio.h>
int main()
{
	int a[10][10],n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	scanf("%d",&a[i][j]);
	
	//2d-Array
	/*
	//Diagnol printing
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j)
				printf("%d",a[i][j]);
			else
				printf(" ");
		}
		printf("\n");
	}
	*/
	//-----------------------------------------------	
	//Diagnol printing inverted
	/*for(i=1;i<=n;i++)
 	}
		printf("%d ",a[i][n-i+1]);          
	}*/
	//reverse array elements
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d",a[i][n-j+1]);
		}
		printf("\n");
	}
	
}