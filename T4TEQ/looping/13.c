//sum of all the digits in odd place 19257--10
/*
*/
#include<stdio.h>
int main()
{
	int n,i,s=0,c=0,temp;
	scanf("%d",&n);
	temp=n;
	/*sum of digits
	----------------
	for(;n;s+=n%10,n/=10);
		printf("%d",s);
	*/
	/*count no of digits
	while(n)
	{
		s++;
		n/=10;
	}
	*/
	while(n)
	{
		s++;
		n/=10;
	}
	printf("Length of the given number is : %d",s);
	while(temp) //19257
	{
		if(s%2==1) //5%2==1 4%2==1 3%2==1 2%2==1 1%2==1
		c+=temp%10;//c= 7+2+1 = 10
		temp/=10; //1925 192 19 1
		s--;
	}
	printf("\n%d",c);
	
	return 0;
}
