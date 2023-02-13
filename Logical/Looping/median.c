#include<stdio.h>
int main()
{
	int n,a[100],i,s,s2,j;
	scanf("%d",&n);
	for(i=1;i<=n;scanf("%d",&a[i++]));
	for(i=1;i<=n;i++)
		for(j=i+1;j<=n;j++)
			if(a[i]>a[j])
				a[i]=a[i]+a[j]-(a[j]=a[i]);
	if(n%2)
		printf("%d",a[n/2+1]);
	else{
		s=a[n/2];
		s2=a[n/2+1];		
		printf("%.2f",(float)(s+s2)/2);
	}
	return 0;
}