//Array of structure
#include<stdio.h>
int main()
{
	struct student{
		char name[10];
		int roll;
		char sec;
	};
	
	//creating structure
	struct student azar[100];
	int n,i,j;
	printf("Enter the number of students:");
	scanf("%d",&n);
	printf("Enter student details:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter name:");
		scanf("%s",azar[i].name);
		printf("Enter roll:");
		scanf("%d",&azar[i].roll);
		printf("Enter section:");
		scanf(" %c",&azar[i].sec); //we should create a space before %c because it takes previous scanf last digit
	}
	printf("\n\n");
		//printing details
		for(i=0;i<n;i++)
			printf("\nName:%s\nRoll:%d\nSection:%c",azar[i].name,azar[i].roll,azar[i].sec);
}