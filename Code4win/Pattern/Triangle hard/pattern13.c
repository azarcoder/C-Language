/*
12345
2345
345
45
5

*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,d,p,f;
	scanf("%d",&n);
	while(n)
	{
		printf("%d\n",n);
		d=(int) log10(n); //digit
		p = (int) ceil(pow(10,d));//get the place value of first digit
		f = (int) (n/p);//get the first digit
		n-=p*f;//remove first digit from number
		
	}

    return 0;
}
