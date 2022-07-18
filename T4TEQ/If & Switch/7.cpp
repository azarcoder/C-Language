#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>0)
	switch((n-1)/10)
	{
		default:
			printf("Invalid");
			break; 
		case 9:
		case 8:
			printf("Fail");
			break;
		case 7:
		case 6:
			printf("B");
			break;
		case 5:
		case 4:
			printf("A");
			break;
		case 3:case 2:case 1:case 0:
			printf("D");
			break;
		
	}
}
