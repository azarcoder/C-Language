//switch new method
#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	switch(a)
	{
		case 'a' ... 'z':
			printf("Lowercase");
			break; 
		case 'A' ... 'Z':
			printf("UpperCase");
			break;
	}
}
