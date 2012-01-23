
#include<stdio.h>
#include<conio.h>
int t,kids[10],ptr=0;
void status()
{
	for(int i=0;i<t;i++)
	{
		printf("kid[%d]=%d\n",i+1,kids[i]);
	}
}
void incr()
{
	ptr++;
	if(ptr>(t-1))
	{
	ptr=0;
	}

}

void main()
{
	printf("Enter total no of kids:");
	scanf("%d",&t);
	printf("\n");
	clrscr();
	for(int i=0;i<t;i++)
	{
		kids[i]=1;
	}
	status();
	b:
	a:
	printf("\n Please enter the count");
	int n;
	scanf("%d",&n);
	if(n<t)
	{
	i=0;
	while(i<n)
	{
		if(kids[ptr]==1)
		{
			incr();
			i++;
		}
		else
		{
			incr();
		}
	}
	if(ptr==0)
	{
		kids[t-1]=0;
	}
	else
	{
		kids[ptr-1]=0;
	}
	status();
	int co=0;
	for(i=0;i<t;i++)
	{
		if(kids[i]==1)
		{
			co++;
		}
	}
	if(co==1)
	{
		for(i=0;i<t;i++)
		{
			if(kids[i]==1)
			{
				printf("Winner is kid[%d]\n",i+1);
			}
		}
	}
	else
	{
		goto a;
	}
	}
	else
	{
	 printf("\n invalid count enter it again: ");
	 goto b;
	}
	getch();
}