#include<stdio.h>
#define max 5
struct stack
{
	int items[max];
	int top;
};
struct stack st;
void push(struct stack*,char);
char pop(struct stack*);
char peek(struct stack*);
int empty(struct stack*);
int isOperand(char);
void infixtopost(char[]);
int isp(char);
int icp(char);
char postfix[MAX];
int main()
{
	char infix[MAX];
    st.top=-1;
    printf("Enter infix expression");
    scanf("%s",infix);
    printf("\nEntered infix Expression is %s",infix);
    infixtopost(infix);
    return 0;
}
void infixtopost(infix[max])
{
	int i,j=0;
	int sym,topsym;
	for(i=0;(sym=infix[i])!='\0';i++)
	{
		if(sym==operand)
		{
			postfix[j]=sym;
			j++;
		}
		else if(sym=='(')
		{
			push(&st,sym);
		}
		else if(sym==')')
		{
			topsym=pop(&st);
			while(topsym!='(')
			{
				postfix[j]=topsym;
				j++;
				topsym=pop(&st);
			}
		}
		else
		{
			while(!=empty(&st) && icp(sym)<=isp(peek(&st)))
			{
				topsym=pop(&st);
				postfix[j]=topsym;
				j++;
			}
			push(&st,sym);
		}
	}
	
while(!empty(&st))
{
	topsym=pop(&st);
	postfix[j]=topsym;
	j++;
}
postfix[j]='\0';
printf("\nPost Fix String is %s",postfix);
}
int isoperand(char c)
{
	if((c>='0' && c<='9') || (c>='a' && c<='z') || (c>='A' && c<='Z'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int icp(char c)
{
	switch (c)
	case '+':
	case '-':return 1;
	case '*':
	case '/':return 2;
	case '$':return 3;
}
int isp(char c)
{
	switch (c)
	case '(':return 0;
	case '+':
	case '-':return 1;
	case '*':
	case '/':return 2;
	case '$':return 3;
}
}
void push(struct stack *stp,char sym)
{
	if (stp->top==max-1)
	{
		printf("overflow");
	}
	else
	{
		stp->top=stp->top+1;
		stp->items[stp->top]=ele;
	}
}
void pop(struct stack *stp)
{
	int ele;
	if(stp->top==-1)
	{
		return -1;
	}
	else
	{
		sym=stp->items[stp->top];
		stp->top=stp->top-1;
		return sym;
	}
}
void peek(struct stack *stp)
{
	int ele;
	if(stp->top==-1)
	{
		return -1;
	}
	else
	{
		sym=stp->items[stp->top];
		return sym;
	}
}
void isempty(struct stack*stp)
{
	if(stp->top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

