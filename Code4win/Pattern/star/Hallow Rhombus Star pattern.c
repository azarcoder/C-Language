/*
    *****
   *   *
  *   *
 *   *
*****
Hallow Rhombus Star pattern
*/
#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;printf("\n"),i++)	
	{
		for(j=n;j>i;printf(" "),j--);
			for(k=1;k<=n;k++)
			{
				if(i==1 || i==n || k==1 || k==n)
					printf("*");
				else
					printf(" ");
			}
	}
}
