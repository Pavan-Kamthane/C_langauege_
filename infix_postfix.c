#include<stdio.h>
#include<string.h>
int priority(char c)
{
	if(c=='^')
	  return 4;
	else if(c=='*' || c=='/' || c=='%')
	 return 3;
	else if(c=='+' || c=='-')
	 return 2;
	else
	 return 1;
}
void main()
{
	char infix[100],post[100],stack[50];
	int top=-1,i,j=0;
	printf("\n Enter expression ");
	scanf("%s",infix);
	strupr(infix);
	for(i=0;i<strlen(infix);i++)
	{
		if(infix[i]=='(')
		 stack[++top]=infix[i];
		else if(infix[i]>='A' && infix[i]<='Z')
		 post[j++]=infix[i];
		else if(infix[i]==')')
		{
			while(stack[top]!='(')
			  post[j++]=stack[top--];
			
		   top--; // remove '(' from stack
		}
		else//operator
		{
			if(priority(infix[i])>priority(stack[top]))
			 stack[++top]=infix[i];
			else //same or low priority
			{
				while(priority(stack[top])>=priority(infix[i]))
				 post[j++]=stack[top--];
			    
			    stack[++top]=infix[i];
			}
		}
		stack[++top]='\0';
		post[j]='\0';
		printf("\n %c \t %s \t %s",infix[i],stack,post);
		top--;
		
	}
}
