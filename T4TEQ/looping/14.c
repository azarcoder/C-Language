#include<stdio.h>
//progressive or not
//9123 not
//12669 progressive

int main()
{
	int n,a=0,f=1;
	scanf("%d",&n); //9123
	a=n%10; //a = 3
	n/=10; //n=912
	while(n)
	{
		if(n%10>a) //2>3 1>2
		{
			f=0;
			a=n%10; //a=2 1 9
		}
		n/=10;
		
	}
	if(f)printf("Progressive");
	else printf("Not Progressive");
	return 0;
}
