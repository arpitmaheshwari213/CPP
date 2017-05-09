#include<conio.h>															//Date:-09/Sept/2015
#include <iostream.h>
#include<stdio.h>

int pop();
void push(int);
int stack[10];
int top=-1;
void main()
{   clrscr();


    char input[20];
    int k,k1,k2;
    cout<<"Enter a valid postfix expression:\n";
    gets(input);

    for(int i=0;input[i]!=NULL;i++)
    {
	    if(!(input[i]=='+'||input[i]=='-'||input[i]=='*'||input[i]=='/'))
		 push(int(input[i])-48);
	    else
	    {
		k1=pop();
		k2=pop();
		switch(input[i])
		{
		     case '+' : { k=k2+k1; push(k);break; }
		     case '-' : { k=k2-k1; push(k);break; }
		     case '*' : { k=k2*k1; push(k);break; }
		     case '/' : { k=k2/k1; push(k);break; }

		}
	    }
    }
    cout<<pop();


    getch();
}
void push(int stk)
{
     stack[++top]=stk;
}

int pop()
{
     return stack[top--];
}

