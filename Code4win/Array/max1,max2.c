#include<stdio.h>
#include<limits.h>
int main()
{
	int a[100],i,n,s=0,max1,max2;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	max1=max2=INT_MIN; //int min = -2147483648
	for(i=1;i<=n;i++)
	{
		if(a[i]>max1) 
		{
			max2=max1;
			max1=a[i];
		}
		else if(a[i]>max2 && a[i]<max1)
			max2=a[i];
	}
	printf("First largest = %d\n",max1);
	printf("Second largest = %d\n",max2);
	//printf("%d",INT_MIN);
    return 0;
}
