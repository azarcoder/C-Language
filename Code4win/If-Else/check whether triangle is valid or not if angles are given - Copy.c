//check whether triangle is valid or not if angles are given
#include<stdio.h>
int main()
{
	int a1,a2,a3,sum;
	scanf("%d%d%d",&a1,&a2,&a3);
	sum = a1+a2+a3;
	if(sum==180 && (a1>0 && a2>0 && a3>0))
		printf("Valid");
	else
		printf("Not valid");
}