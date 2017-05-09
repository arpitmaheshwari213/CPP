#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

struct dlist
{
int val;
dlist *prev,*next;
};

typedef struct dlist dlist;

dlist* makenode(int);
void printforward(dlist*);
dlist* Delete(dlist*,int,dlist**);


void main()
{clrscr();
int tmp,sval;
dlist* start,*last,*nn;
start=last=NULL;
cout<<"enter any value(0 to stop)";
while(1)
{

cin>>tmp;

if(tmp==0)
break;

nn=makenode(tmp);

if(!start)
start=nn;
else
{last->next=nn;}
last=nn;
}
printforward(start);
cout<<"enter the search value you wanna delete :";
cin>>sval;
start=Delete(start,sval,&last);
printforward(start);
}


dlist* makenode(int tmp)
{
dlist* nn;
nn=(dlist*)malloc(sizeof(dlist));
nn->val=tmp;
nn->next=NULL;
nn->prev=NULL;

return nn;
}

void printforward( dlist*ptr)
{
while(ptr)
{
cout<<"\n"<<ptr->val;
ptr=ptr->next;
}
}

dlist* Delete(dlist* start,int sval,dlist**p2last)

{
dlist*ptr;
for(ptr=start;ptr&&ptr->val!=sval;ptr=ptr->next);
if(ptr)
{
if(ptr==start)
start=start->next;
else
{ptr->prev->next=ptr->next;   }
if(ptr==*p2last)
{*p2last=*p2last->prev; }
else
{ptr->next->prev=ptr->prev;}
free(ptr);
}
return start;
}