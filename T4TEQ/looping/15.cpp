// 5 = 1,2,3,4,5
							//1/1=1
							//2/2=1
							//6/3=2
							//24/4=6
							//120/5=24+6+2+1+1 = 34
#include<stdio.h>
int main()
{
	int n,fact,s=0,i,j;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1,fact=1;j<=i;j++)
		{
			fact*=j;//1*2*3*4*5 = 120
		}
		s+=fact/i;
	}
	printf("%d",s);
}
