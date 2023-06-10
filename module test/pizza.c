#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//gvar
int id,order_id=101,g=0,pc[100],rate;
char nuser[30];
char products[100][100]={
	{"Pizza small"},
	{"Pizza meidum"},
	{"Pizza large"},
	{"popcorn medium"},
	{"Pizza large"},
	{"pepsi"}
};
char prod[100][100];
int price[100]={50,100,150,50,100,50};
//sub func()
int user();
int waiter();
int create();
int login();
struct user
{
	char name[30];
	int id,f,psw;
}u[100];
int main()
{
	int n;
	printf("*** PIZZA 4 U ***\n");
	while(1)
	{
		printf("1.User\n2.Waiter\n3.Exit\n");
		scanf("%d",&n);
		if(n==1)
			user();
		else if (n==2)
			waiter();
		else
			exit(0);
	}
	return 0;
}
//user
int user()
{
	int n;
	printf("Welcome User!\n");
	while(1)
	{
	printf("1.create\n2.Login\n3.Exit\n");
	scanf("%d",&n);
	if(n==1)
		create();
	else if (n==2)
		login();
	else
		return main();
	}
	
}
//waiter
int waiter()
{
	printf("Welcome waiter!");
}
//waiter
int create()
{
	char name[30];
	int psw;
	printf("Welcome craete page!\n");
	printf("Enter your name:");
	scanf("%s",name);
	printf("Enter Password:");
	scanf("%d",&psw);
	strcpy(u[g].name,name);
	u[g].id=id;
	u[g].f=0;
	u[g].psw=psw;
	g++;
	id++;
	printf("Created Successfully...\n");
}
//waiter
int login()
{
	char name[30];
	int psw,i=0,check=0;
	printf("Welcome login page!\n");
	printf("Enter your username:");
	scanf("%s",name);
	printf("Enter Password:");
	scanf("%d",&psw);
	for(i=0;i<g;i++)
	{
		if(strcmp(u[i].name,name)==0 && psw==u[i].psw)
		{
			strcpy(nuser,name);
			while(1)
			{
				int x;
				printf("1.Order\n2.Status\n3.Pointer\n4.Exit\n");
				scanf("%d",&x);
				if(x==1)
				{
					char c;
					int p,q,i=0;
					printf("Welcome to Order page!\n");
					printf("1.Pizza small\tRs.50\n2.pizza medium\tRs.100\n3.pizza large\tRs.150\n4.popcorn medium\tRs.50\n5.popcorn large\tRs.100\n6.pepsi\tRs.50\n");
					while(1)
					{
						printf("\nEnter your product:");
						scanf("%d",&p);
						printf("\nEnter your quantity:");
						scanf("%d",&q);
						p--;
						if(u[g].f==0) u[g].f=1;
						strcpy(prod[i],products[p]);
						rate+=price[p]*q;
						pc[i]=q;
						printf("for Exit, press Y/y");
						scanf("%c ",&c);
						if(c=='y' || c=='Y')
						{
							printf("order confirmation:\n");
							int k;
							printf("Your ordered:\n");
							for(k=0;k<i;k++)
							{
								printf("Product:%s\tQty:%d\n",prod[k],pc[k]);
							}
							return main();
						}
						else
						{
							i++;
						 	continue;
						 }
						
					}
				}
				else if(x==2)
				{
					printf("Status:\n");
				}
				else if(x==3)
				{
					printf("Points:\n");
				}
				else if(x==4)
					return user();	
			}
		}
	}
}
