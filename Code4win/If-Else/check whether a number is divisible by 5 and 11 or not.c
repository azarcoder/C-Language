//check whether a number is divisible by 5 and 11 or not
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%5==0 && n%11==0)
		printf("divisible by 5 and 11 ");
	else
		printf("Not divisible by 5 and 11 : %d",n);
	}