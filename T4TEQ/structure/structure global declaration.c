//structure global declaration
#include<stdio.h>
struct student
{
	int roll;
	char name[50];
	char section;
}azar;
int main()
{
	//struct student azar;
	scanf("%d %s %c",&azar.roll,&azar.name,&azar.section);
	printf("Roll no: %d\nName: %s\nSection: %c",azar.roll,azar.name,azar.section);
	return 0;
}