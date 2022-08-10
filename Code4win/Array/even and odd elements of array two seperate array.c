//even and odd elements of array two seperate array
#include<stdio.h>
void pa(int a[],int l);
int main()
{
	int a[100],i,n;
	int odd[30],even[30],e=0,o=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]&1)
		{
			odd[o]=a[i];
			o++;
		}
		else
		{
			even[e]=a[i];
			e++;
		}
	}
	printf("Even:");
	pa(even,e);
	printf("Odd:");
	pa(odd,o);

    return 0;
}
void pa(int a[],int l)
{
	int i;
	for(i=0;i<l;printf("\n"),i++)
		printf("%d\t",a[i]);
}
