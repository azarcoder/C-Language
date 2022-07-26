//perfect number --> Perfect number is a positive integer which is equal
//to the sum of its proper positive divisors. 
//divisor of 6--> 1,2,3 1+2+3==6 it is perfect.
#include<stdio.h>
int main()
{
	int i,n,s=0;
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
			s+=i;
	}
	if(s==n && n>0)
		printf("%d is a perfect number",s);
	else
		printf("Not perfect");
    return 0;
}
