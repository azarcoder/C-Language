//decimal to binary conversion
#include<stdio.h>
#define INT_SIZE sizeof(int) * 8
int main()
{
	int n,index,i;
	int bin[INT_SIZE];
	
	printf("Enter any number:");
	scanf("%d",&n);
	
	index = INT_SIZE-1;
	
	while(index>=0)
	{
		bin[index] = n & 1;
		index--;
		n >>= 1;
	}
	
	for(i=0;i<INT_SIZE;i++)
		printf("%d ",bin[i]);
    return 0;
}
