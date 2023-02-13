//mode is a value that occurs the highest numbers of time
#include<stdio.h>
int main()
{
	int n,a[100],c=0,m=0,max_occur,i,j;
	for(i=0,scanf("%d",&n);i<n;scanf("%d",&a[i++]));
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
				c++;
		}
		if (c > m)
		{
			m=c;
			max_occur=a[i];
		}
	}
	printf("Mode:%d",max_occur);
	return 0;
}