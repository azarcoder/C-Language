/*
*****
 ****
  ***
   **
    *
Inverted mirrored Right triangle Star pattern
*/
#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;printf("\n"),i++)
	{
		for(j=1;j<i;printf(" "),j++);
		for(j=n;j>=i;j--)
			printf("*");
	}
}
