//structure local declaration
#include<stdio.h>
int main()
{
	struct student
	{
		int roll;
		char name[10];
		char section;
	};
	struct student azar;
	scanf("%d %s %c",&azar.roll,&azar.name,&azar.section);
	printf("Roll no: %d\nName: %s\nSection: %c",azar.roll,azar.name,azar.section);
	return 0;
}