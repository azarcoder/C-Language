#include<stdio.h>
int main()
{
	int n,n2,l;
	scanf("%d %d",&n,&n2);
	l = n>n2?n:n2;
	while(1)
	{
		if(l%n==0 && l%n2==0)
		{
			printf("%d",l);
			break;
		}
		l++;
	}
	return 0;
}