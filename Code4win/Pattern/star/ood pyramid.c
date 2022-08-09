/*
    *
   ***
  *****
 *******
*********
ood pyramid
*/
#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;printf("\n"),i++)
	{
		for(j=i;j++<n;printf(" "));
		
		for(j=1;j<=i;j++)
		{
			for(j=1;j<=2*i-1;j++)
				printf("*");
		}
	}
}
