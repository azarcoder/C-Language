//power of number
#include<stdio.h>
int main()
{
	int a,b,i,s=1;
	printf("Enter 2 numbers:");
	scanf("%d,%d",&a,&b);
	for(i=1;i<=b;i++)
		s*=a;
	printf("%d",s);

    return 0;
}
