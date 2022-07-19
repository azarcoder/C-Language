//Structure function
#include<stdio.h>
	struct student{
	char name[10];
	int roll;
	char sec;
	};
	
	void print(struct student a[],int n)
	{
		for(int i=0;i<n;i++)
			printf("Name:%s\nRollno:%d\nSection:%c:",a[i].name,a[i].roll,a[i].sec);
	}
	
	int main()
	{
		struct student a[30];
		int s;
		printf("Enter the no of student:");
		scanf("%d",&s);
		for(int i=0;i<s;i++)
		{
			printf("Enter name:");
			scanf("%s",a[i].name);
			printf("Enter roll:");
			scanf("%d",&a[i].roll);
			printf("Enter section:");
			scanf(" %c",&a[i].sec);
		}
		print(a,s); //a is array and this all detail of value sent to function
		return 0;
	}