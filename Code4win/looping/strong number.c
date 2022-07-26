//strong number 145 --> 1!+4!+5!=1+24+120=145
#include<stdio.h>
int main()
{
	int n,s,o,i,l;
	long f;
	scanf("%d",&n);
	o=n;
	while(n)
	{
		l=n%10;
		f=1;
		for(i=1;i<=l;i++)
		{
			f*=i;
		}
		s+=f;
		n/=10;
	}
	if(s==o)
		printf("Strong number");
	else
		printf("Not strong number");
	return 0;
}
