#include<stdio.h>
void pa(int a[],int l);
int main()
{
	int a[100],i,n,s,f=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter search element:");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("index position %d",i+1);
	}
	else
		printf("Not found");
	return 0 ;
}
	