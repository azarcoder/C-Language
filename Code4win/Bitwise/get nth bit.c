//get nth bit
#include<stdio.h>
int main()
{
	int num,n;
	printf("Enter any number:");
	scanf("%d",&num);
	printf("Enter the bit:");
	scanf("%d",&n);
	int bit=(num >> n) & 1;
	printf("The %d bit is set to %d",n,bit);
    return 0;
}
//0 th bit,1,2 ....
