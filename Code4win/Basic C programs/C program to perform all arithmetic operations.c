/*C program to perform all arithmetic operations
Input
First number: 10
Second number: 5
Output

Sum = 15
Difference = 5
Product = 50
Quotient = 2
Modulus = 0
*/
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("SUM = %d\n",a+b);
	printf("Diff = %d\n",a-b);
	printf("Prod = %d\n",a*b);
	printf("Quo = %d\n",a/b);
	printf("Mod = %d",a%b);
}
