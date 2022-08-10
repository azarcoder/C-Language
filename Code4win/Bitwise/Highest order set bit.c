//Highest order set bit
#include<stdio.h>
#define INT_SIZE sizeof(int) * 8
int main()
{
	int num,i,order=-1;
	printf("Enter any number:");
	scanf("%d",&num);
	for(i=0;i<INT_SIZE;i++)
	{
		if((num >> i) & 1)
			order=i;
	}
	if(order !=-1)
		printf("Highest :%d",order);
	else
		printf("0 has no bits");
    return 0;
}