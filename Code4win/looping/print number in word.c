//print num in word
#include<stdio.h>
int main()
{
	long long int n,num=0;
	scanf("%lld",&n);
	for(;n;num=num*10+n%10,n/=10);
	while(num)
	{
		switch(num%10)
		{
			case 0:
				printf("Zero ");
				break;
			case 1:
				printf("One ");
				break;
			case 2:
				printf("Two ");
				break;
			case 3:
				printf("Three ");
				break;
			case 4:
				printf("Four ");
				break;
			case 5:
				printf("Five ");
				break;
			case 6:
				printf("Six ");
				break;
			case 7:
				printf("Seven ");
				break;
			case 8:
				printf("Eight ");
				break;
			case 9:
				printf("Nine ");
				break;
		}
		num/=10;
	}

    return 0;
}
