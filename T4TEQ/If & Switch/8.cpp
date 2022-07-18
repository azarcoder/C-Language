#include<stdio.h>
int main()
{
	int n,num,a,s=0;
	scanf("%d",&n);
	sumof6:
		scanf("%d",&num);
		if(num%10==6)
		s+=num;
		n--;
		if(n)
		goto sumof6;
	printf("%d",s);
}
