/*
*********
 *******
  *****
   ***
    *
Inverted Pyramid star pattern (n*2-(2*i-1))
*/


#include<stdio.h>
int main()
{
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1;i<=n;printf("\n"),i++)
	{
		for(j=1;j<i;printf(" "),j++);
		
		for(j=1;j<=(n*2-(2*i-1));j++)
		{
			printf("*");
		}
	}
	
	
}
