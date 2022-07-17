//check whether a number is positive, negative or zero
#include<stdio.h>
int main()
{
	int n;
	while(1)
	{
	scanf("%d",&n);
	if(n>0)
		printf("Positive\n");
	if(n<0)
		printf("Negative\n");
	if(n==0)
		printf("Zero\n");
	}
}