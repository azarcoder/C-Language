//543212345
#include<stdio.h>
int azar(int n);
int main()
{
	int n,i,s;
	scanf("%d",&n); 
	azar(n);
}
int azar(int n)
{
	if(n>1) //5 
	{
		printf("%d",n); 
		azar(n-1); 
	}
	printf("%d",n);
}
/*

______________
|543212321   |
|------------|
|54321232    |
|------------|
|5432123     |
|------------|          
|543212      |
|------------|
|54321       |
|------------|
|false       | so print 1, so azar(1) is one then it will apply this value to azar(1)
|------------|
|5432 azar(1)|
|------------|
|543 azar(2) |
|------------|
|5 4 azar(3) |
|----------- |			 
|azar(4)     |			 
|------------|
|5 azar(4)	 |		 
|------------|			 
|azar(n)	 | first time i call fun,example I give 5,
|------------|
|main()      |
|____________|

*/
