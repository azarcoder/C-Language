#include<stdio.h>
//0 1 0+1 1+1 2+1 3+2 -- 0 1 1 2 3 5  
//fibonacci series upto n numbers
int main()
{
	int n,a=-1,b=1,c=0,i=0;
	scanf("%d",&n); //5
	while(i<n)
	{
		c=a+b; //c=-1+1= 0,1,1,2,3
		printf("%d  ",c);
		a=b; //a=1,0,1,1,2
		b=c; //b=0,1,1,2,3
		i++;
	}
}
