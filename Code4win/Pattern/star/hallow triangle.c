/*
    *
   * *
  *   *
 *     *
*********

*/
#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;printf("\n"),i++)
	{
		for(j=i;j++<n;printf(" "));
			for(j=1;j<=(2*i-1);j++) 
			{
				if(j==1 ||i==n ||j==(2*i-1)) 
					printf("*");
				else
					printf(" ");
			}

	}
}
