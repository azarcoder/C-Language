#include<stdio.h>
int main()
{
	int n;
	float s,t=0;
	scanf("%d",&n);
	s=n;
	while(t!=s)
	{
		t=s;
		s=(n/t+t)/2;
	}
	printf("%.3f",s);
	return 0;
}