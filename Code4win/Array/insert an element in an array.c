//insert an element in an array
#include<stdio.h>
int main()
{
	int a[100],i,n,num,pos;
	printf("Enter no of element:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element do you want to insert:");
	scanf("%d",&num);
	printf("Enter position do you want to insert:");
	scanf("%d",&pos);
	
	if(pos > n+1 || pos <= 0)
	{
		printf("Invalid position! Please enter position between 1 to %d",n);
	}
	else
	{
		for(i=n;i>=pos;i--)
		{
			a[i]=a[i-1];
		}
		a[pos-1]=num;
		n++;
		printf("Array elements after insertion:");
		for(i=0;i<n;i++)
			printf("%d\t",a[i]);
	}
    return 0;
}



