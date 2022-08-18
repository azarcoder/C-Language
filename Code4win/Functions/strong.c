//strong number
long int fact(int n)
{
	long int f=1;
	for(int i=1;i<=n;i++)
		f*=i;
	return f;
}
void interval(int l,int u)
{
	long long s;
	int num;
	while(l!=u)
	{
		s=0;
		num=l;
	while(num!=0)
	{
		s+=fact(num%10);
		num/=10;
	}
	if(l == s)
		printf("%d ,",l);
	l++;
	}
}
