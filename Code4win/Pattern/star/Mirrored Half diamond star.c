/*
    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *
Mirrored Half diamond star
*/
#include<stdio.h>
int main()
{
	int n,c,i,j,s;
	scanf("%d",&n);
	c=1;
	s=n-1;
	for(i=1;i<n*2;printf("\n"),i++)
	{
		for(j=1;j<=s;printf(" "),j++);
		for(j=1;j<=c;j++)
		{
			printf("*");
		}
		if(i<n)
		{
			c++;
			s--;
		}
		else
		{
			c--;
			s++;
		}
	}
}












