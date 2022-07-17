//enter student marks and find percentage and grade

/*

If percentage >= 90% : Grade A
If percentage >= 80% : Grade B
If percentage >= 70% : Grade C
If percentage >= 60% : Grade D
If percentage >= 40% : Grade E
If percentage < 40% : Grade F

*/

#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5;
	float avg;
	printf("Enter 5 subject marks:\n");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	avg=((m1+m2+m3+m4+m5)/5.0);
	
	if(avg>=90)
		printf("Grade A");
	else if(avg>=80)
		printf("Grade B");
	else if(avg>=70)
		printf("Grade C");
	else if(avg>=60)
		printf("Grade D");
	else if(avg>=40)
		printf("Grade E");
	else
		printf("Grade F");
	printf("\nAverage:%.2f",avg);
}