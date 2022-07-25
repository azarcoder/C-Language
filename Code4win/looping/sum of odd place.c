//sum of odd place and even place
#include<stdio.h>
int main()
{
	int n,i,s=0,e=0;
	scanf("%d",&n);
	for(i=1;n;i++,n/=10)
	{
		if(i%2)
			s+=n%10;
		else
			e+=n%10;
	}
	printf("odd place sum: %d\n",s);
	printf("Even place sum: %d",e);
    return 0;
}
