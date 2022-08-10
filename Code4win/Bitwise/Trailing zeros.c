//leading zeros
#include<stdio.h>
#define INT_SIZE sizeof(int) * 8
int main()
{
	int num,i,c=0,msb;
	printf("Enter any number:");
	scanf("%d",&num);
	msb = 1 << (INT_SIZE - 1);
	for(i=0;i<INT_SIZE;i++)
	{
		if((num << i) & msb)
			break;
		c++;
	}
		printf("Total number of leading zeros :%d",c++);
    return 0;
}