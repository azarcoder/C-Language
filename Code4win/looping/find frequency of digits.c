//find frequency of digits
#include<stdio.h>
#define BASE 10
int main()
{
	long long n,num;
	scanf("%lld",&n);
	int f[BASE],l,i;
	for(i=0;i<BASE;i++)
		f[i]=0;
	num=n;
	while(num)
	{
		l=num%10;
		num/=10;
		f[l]++;
		//printf("%d",f[l]);
	}
	for(i=0;i<BASE;i++)
		printf("occuurence of %d = %d\n",i,f[i]);
	
    return 0;
}
