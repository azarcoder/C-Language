//structure using dot
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
	struct student azar;
	azar.roll=27;
	strcpy(azar.name,"Azarudeen");
	azar.section='B';
	printf("Roll no: %d\nName: %s\nSection: %c",azar.roll,azar.name,azar.section);
	return 0;
}