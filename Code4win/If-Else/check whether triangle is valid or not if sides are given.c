//check whether triangle is valid or not if sides are given
/*
 	/\
   /  \
a+b>c  a+c>b  
 /______\
   b+c>a
   
*/
#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a+b>c)&&(b+c>a)&&(a+c>b))
		printf("Valid");
	else
		printf("Not valid");
}

