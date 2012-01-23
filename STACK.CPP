#include<stdio.h>
#include<conio.h>
#include<string.h>

int stack[10];
int top=-1;

int push(int x)
{
	if(top>9)
	return 0;
	else
	{
		top++;
		stack[top]=x;
	}
	return 1;

}

int pop()
{

	if(top==-1)
	{
		return -1;
	}
	else
	{

		return(stack[top--]);
	}
}

void main()
{
	int ch;
	clrscr();
	while(ch!=3)
	{       b:
		printf("\n********Stack Program**********\n");
		printf("1.PUSH\n");
		printf("2.PATTERN CHECK\n");
		printf("3. EXIT\n");
		printf("Enter Your Choice : ");
		scanf("%d",&ch);
		if(ch==1)
		{
			int n=0,s=0;
			int f=1;
			while(f)
			{       a:
				printf("\nEnter the no to Push: ");
				scanf("%d",&n);
				if(top== -1)
				{
					push(n);
					s=n;
				}
				else
				{
					if( n == s+1 )
					{
						s=n;
						push(n);
					}
					else
					{
						printf("\n Invalid PUSH %d ",n);
						break;
					}
				}

			       printf("\nDo You Want To Push More Elements[y/n]");
			       flushall();
			       ch = getch();
			       if(ch == 'y' || ch == 'Y')
				{
				   goto a;
				}
			       else
				{
				   goto b;
				}
			}
		}
		else if(ch==2)
		{
			int i=0,t=0,j=0,len;
			char s[20];
			printf("\n Enter the Pattern");
			scanf("%s",s);
			len=strlen(s);
			while(i<len)
			{
				if(i==0)
				{
					for(j=0;j<= s[0]-'0' ;j++)
					{
						push(j);
					}
					t=pop();
					printf("\%d",t);
					t=pop();
					i++;
				}
				else
				{
					if(t == s[i]-'0')
					{
						printf("\n%d",t);
						t=pop();
						i++;
					}
					else if(t < s[i]-'0')
					{

						int c=0,k;
						while(j<= s[i]-'0')
						{
							push(j);
							j++;
							c++;
						}
						for(k=0;k<c;k++)
						{
						if(t!=-1)
						{printf("\n%d",t);}
						t=pop(); }
						i++;
					}
					else
					{	break; }
				}

			}
			if(t==-1)
			{
				printf("\nValid Pattern");
			}
			else
			{
				printf("\n Invalid Pattern %d",t);

			}
		}
		else if(ch==3)
		{
			printf("\n WINDOW IS EXITING:");
		}
		else
			printf("Enter Valid choice");
	}
	getch();
}

