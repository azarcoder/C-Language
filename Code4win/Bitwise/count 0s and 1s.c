//count 0s and 1s
#include<stdio.h>
#define INT_SIZE sizeof(int) * 8
int main()
{
	int num,i,c=0,z=0,o=0;
	printf("Enter any number:");
	scanf("%d",&num);
	for(i=0;i<INT_SIZE;i++)
	{
		if((num &1))
			o++;
		else
			z++;
		num>>= 1;
	}
		printf("Total number of zeros :%d\n",z);
		printf("Total number of ones :%d",o);
    return 0;
}