//colon operator
#include<stdio.h>
struct student
	{
		int roll;
		char name[10];
		char section;
	}v1;
struct student2
	{
		int roll:27;
		char name[10];
		int age : 12;
	}v2;
int main()
{
	printf("Structure 1 : %lu\n Structure 2 : %lu",sizeof(v1),sizeof(v2));
}