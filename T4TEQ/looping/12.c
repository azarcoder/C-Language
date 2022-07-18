//64 -- 8 
#include<stdio.h>
int main()
{
	int n,a;
	float s,t=0.0;
	printf("Enter the number:");
	scanf("%d", &n); 
	s=n;
	
	while(t!=s) 
	{
		t=s; 
		s=(n/t+t)/2;    
	}
	if(s==(int)s)
		printf("%d",(int)s);
	else
		printf("%.3f",s);
	
}

