/*
*****
 *   *
  *   *
   *   *
    *****
hallow Mirrored Rhombus Star pattern
*/
#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;printf("\n"),i++)
	{
		for(j=1;j<i;printf(" "),j++);//front space
		for(j=1;j<=n;j++)
		{
			if(i==1 || i==n || j==1 || j==n)
				printf("*");
			else
				printf(" ");
		}
	}
	
}
