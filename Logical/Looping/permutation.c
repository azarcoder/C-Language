//permutation - formula (nPk=n!(n-k)!)
#include<stdio.h>
int fact(int n);
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	printf("%dP%d = %d",n,k,fact(n)/fact(n-k));
	return 0;
}
int fact(int n)
{
	if (n>=2) return n*fact(n-1);
	else return 1;
}
