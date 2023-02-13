#include<stdio.h>
int main()
{
	int n,s=0;
	scanf("%d",&n);//444
	while(n!=0 || s>9)
	{
		if(n==0)
		{
			n=s;
			s=0;
		}
		s+=n%10;
		n/=10;
	}
	printf("%d",s);
	return 0;
}