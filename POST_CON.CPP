#include<iostream.h>
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
int isoperator(char);
int prec(char);
void push(char);
char pop();
char stack[20];
int top=-1;

void main()
{
 char inp[200],out[200],k;
 int i=0,j=0;
 clrscr();
 cout<<"Enter the expression\n";
 gets(inp);

 while(inp[i]!=NULL)
 {
  if(isalpha(inp[i]))
  {  out[j]=inp[i];
     i++;j++;
  }
  else if(isoperator(inp[i]))
       {
	 if(top!=-1)
	 {
	  k=pop();
	  if(prec(k)>prec(inp[i]))
	  {
	    push(k);
	    push(inp[i]);
	    i++;
	  }
	  else
	  {
	    out[j]=k;
	    push(inp[i]);
	    i++;j++;
	  }
	 }
	if(top==-1)
	{  push(inp[i]);i++;}
       }
   }
 if(top!=-1)
 {
  while(top!=-1)
  {
   out[j]=pop();
   j++;
  }
 }
 out[j]=NULL;
 cout<<endl;
 puts(out);
getch();
}

void push(char ch1)
{
 stack[++top]=ch1;
}

char pop()
{
 return stack[top--];
}

int prec(char ch2)
{
 switch(ch2)
 {
  case '+':return 2;
  case '-':return 2;
  case '*':return 1;
  case '/':return 1;
  default:return 0;
 }
}

int isoperator(char ch3)
{
 if(ch3=='+'||ch3=='-'||ch3=='*'||ch3=='/')
   return 1;
 else
   return 0;
}
