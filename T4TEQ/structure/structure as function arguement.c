//structure as function arguement
#include<stdio.h>
int main()
{
	struct student
	{
		int roll;
		char name[10];
		char section;
	};
	
	void printstd(struct student var)
	{
		printf("Roll:%d\n",var.roll);
		printf("Name:%s\n",var.name);
		printf("Section:%c",var.section);
	}
	
	void changestd(struct student* var)
	{
		var -> roll=6;
		var -> section='B';
	}
	
	int main()
	{
		struct student azar = {12,"Azar",'D'};
		printstd(azar);
		changestd(&azar);
		return 0;
	}
}