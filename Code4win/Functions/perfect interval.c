//perfect interval
#include<stdio.h>
int perfect();
void interval();
int main()
{
	int s,e;
	printf("start:");
	scanf("%d",&s);
	printf("end:");
	scanf("%d",&e);
	interval(s,e);
    return 0;
}
void interval(int s,int e)
{
	printf("Perfect number between %d to %d:\n",s,e);
	while(s<=e)
	{
		if(perfect(s))
			printf("%d,",s);
		s++;
	}
}
int perfect(int n)
{
	int s=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
			s+=i;
	}
	if(s==n)
		return 1;
	else
		return 0;
}
