/*
    *
   * *
  *   *
 *     *
* * * * *
Hallow pyramid triangle Star pattern
*/
#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;printf("\n"),i++)
	{
		for(j=n;j-->i;printf(" "));
		for(j=1;j<=i;j++)
		{
			if(j==1 || j==i || i==n)
				printf("* ");
			else
				printf("  ");			
		}
	}
}
