//check alphabet, digit or special character
#include<stdio.h>
int main()
{
	char n;
	scanf("%c",&n);
	if((n>='a' && n<='z') || (n>='A' && n<='Z'))
		printf("Alphabets");
	else if (n>='0' && n<='9')
		printf("Digit");
	else
		printf("Special character");
}