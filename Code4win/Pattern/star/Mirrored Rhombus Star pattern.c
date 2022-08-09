/*
*****
 *****
  *****
   *****
    *****
Mirrored Rhombus Star pattern
*/
#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;printf("\n"),i++)
	{
		for(j=1;j<i;j++)
			printf(" ");
		for(j=1;j<=n;j++)
			printf("*");
	}
	
}
