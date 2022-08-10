//delete an element in an array
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
	printf("Enter position do you want to delete:");
	scanf("%d",&pos);
	
	if(pos < 0 || pos > n)
	{
		printf("Invalid position! Please enter position between 1 to %d",n);
	}
	else
	{
		for(i=pos-1;i<=n-1;i++)
		{
			a[i]=a[i+1];
		}
		n--;
		printf("Array elements after insertion:");
		for(i=0;i<n;i++)
			printf("%d\t",a[i]);
	}
    return 0;
}

