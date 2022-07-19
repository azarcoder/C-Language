//Nested Structure
#include<stdio.h>
int main()
{
	struct Student{
		char name[20];
		char sec;
		struct Address
		{
			char city[30];
			int pincode;
		}addr;
	};
	
	struct Student azar={"Azar",'B',"Trichy",620017};
	
	struct Subject{
		char name[50];
		char book[50];
	}; 
	
	struct Teacher
	{
		char name[50];
		struct Subject subject;
	};
	
	struct Teacher teacher;
	printf("Name of the Author:");
	scanf("%s",teacher.name);
	printf("Book name:");
	scanf(" %[^\n]",&teacher.subject.book);
	printf("Subject:");
	scanf(" %s",teacher.subject.name);
	
	printf("Name:%s\nBook name:%s\nSubject name:%s\n",teacher.name,teacher.subject.book,teacher.subject.name);
	printf("\n\n");
	printf("Name:%s\nStudent city:%s\n",azar.name,azar.addr.city);
}