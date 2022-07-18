#include<stdio.h>
int main()
{
	int n,a,c;
	scanf("%d",&n);
	if(n>=2000)
	{
		a=n/2000;
		c=a*2000;
		n-=a*2000;
		printf("2000 X %d = %d\n",a,c);
	}
	if(n>=500)
	{
		a=n/500;
		c=a*500;
		n-=a*500;
		printf("500 X %d = %d\n",a,c);	
	}
	if(n>=200)
	{
		a=n/200;
		c=a*200;
		n-=a*200;
		printf("200 X %d = %d\n",a,c);
	}
	if(n>=100)
	{
		a=n/100;
		c=a*100;
		n-=a*100;
		printf("100 X %d = %d\n",a,c);
	}
	if(n!=0)
	{
		printf("others -- %d",n);
	}
	return 0;		
}

