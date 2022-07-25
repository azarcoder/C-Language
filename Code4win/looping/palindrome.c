#include<stdio.h>
int main()
{
	int n,p;
	scanf("%d",&n);
	p=n;
	int r=0;
	for(;n;r=r*10+n%10,n/=10);
	p==r?printf("Palindrome"):printf("Not palindrome");	
    return 0;
}
