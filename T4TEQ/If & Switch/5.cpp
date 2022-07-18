#include<stdio.h>
int main()
{
	int n,s=0,f,l,add;
	scanf("%d",&n);
	s = n*n;
	f = s/100;
	l = s%100;
	add = f+l;
	if(add==n){
		printf("True");
	}	
	else
	{
		printf("False");
	}
	}
	

