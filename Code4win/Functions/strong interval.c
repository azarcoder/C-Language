//strong interval
#include<stdio.h>
#include "strong.c"
int main()
{
	int n;
	//check strong or not
	//scanf("%d",&n);
	//printf(strong(n)==n?"STRONG NUMBER":"NOT STRONG NUMBER");
	
	//check upto given number
	long int l,u;
	scanf("%d%d",&l,&u);
	interval(l,u);
}
