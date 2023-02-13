#include<stdio.h>
int sum(int n);
int main()
{
	int s;
	scanf("%d",&s);
	if(s>9)
		printf("%d",sum(s));
	else 
		printf("%d",s);
	return 0;
}
int sum(int n)
{
	int s=0;
	while(n)
	{
		s+=n%10;
		n/=10;
	}
	if (s>9)
		sum(s);
	else return s;
}