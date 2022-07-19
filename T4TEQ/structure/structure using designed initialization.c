//structure using designed initialization
#include<stdio.h>
#include<string.h>
int main()
{
	struct student
	{
		int roll;
		char name[10];
		char section;
	};
	struct student azar={.section='B',.roll=27};
	printf("Section: %c\nRoll: %d",azar.section,azar.roll);
	return 0;
}