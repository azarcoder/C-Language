//structure using curly braces
#include<stdio.h>
int main()
{
	struct student
	{
		int roll;
		char name[10];
		char section;
	};
	struct student azar={12,"Azar",'B'};
	printf("Roll no: %d\nName: %s\nSection: %c",azar.roll,azar.name,azar.section);
	return 0;
}