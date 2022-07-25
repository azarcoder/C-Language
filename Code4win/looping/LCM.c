//LCM
#include<stdio.h>
int main()
{
	int a,b,c,i,lcm=1;;
	scanf("%d%d",&a,&b);
	c=a>b?a:b; 
	i=c;
	while(1)
	{
		if(i%a==0 && i%b==0)
		{
			lcm=i;
			break;
		}
		i+=c;
	}
	printf("%d",lcm);
    return 0;
}
