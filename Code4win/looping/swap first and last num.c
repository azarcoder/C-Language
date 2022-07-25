#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	scanf("%d",&n); //12345
	int l,f,d,s;
	l=n%10; //5
	//digit findout
	d=(int)log10(n); //4
	//first digit
	f=(int)(n/pow(10,d)); //12345/10000 = 1
	//swap
	s = l; //5
	s *= (int) pow(10,d); // 5*10000 = 50000
	s += n % ((int) pow(10, d)); // 50000+= 12345 % 10000 = 2345 --> 52345
	s -= l; //52345-5 = 52340
	s += f; //52340+1 = 52341
	printf("You typed:%d\n",n);
	printf("After swapped:%d",s); 
	
}