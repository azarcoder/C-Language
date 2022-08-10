//LSB
#include<stdio.h>
int main()
{
	int num,n;
	printf("Enter any number:");
	scanf("%d",&num);
	
	if(num & 1)
		printf("LSB of %d is set(1)",num);
	else
		printf("LSB of %d is set(0)",num);
    return 0;
}
