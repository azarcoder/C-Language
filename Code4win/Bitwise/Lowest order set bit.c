//Lowest order set bit
#include<stdio.h>
#define INT_SIZE sizeof(int) * 8
int main()
{
	int num,i,order;
	printf("Enter any number:");
	scanf("%d",&num);
	order=INT_SIZE - 1;
	for(i=0;i<INT_SIZE;i++)
	{
		if((num >> i) & 1)
		{
			order=i;
			break;
		}
	}
		printf("Lowest :%d",order);
    return 0;
}