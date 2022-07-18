#include<stdio.h>
int main()
{
	int n,s=0;
	scanf("%d",&n);
	if(n%2==0){
		//c=n*n*n;//cube
		s=n*n*n%100/10;
		//s/=10;
		printf("%d",s);
	}
	else
	{
		//c=n*n;//square
		s=n*n%10;
		printf("%d",s);
	}
}
