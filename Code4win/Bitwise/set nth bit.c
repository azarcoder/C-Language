//set nth bit
#include<stdio.h>
int main()
{
	int num,n;
	printf("Enter any number:");
	scanf("%d",&num);
	printf("Enter nth bit to set:");
	scanf("%d",&n);
	int new = (1 << n) | num;
	printf("After set value of %d is %d(in decimal)",num,new);
    return 0;
}
//convert the bit like, if given bit 1 convert into 0 if 0 then convert into 1