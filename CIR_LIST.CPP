  #include<iostream.h>
  #include<stdio.h>
  #include<conio.h>
  #include<stdlib.h>

  struct clist
 {
  int val;
  struct clist *next;
 };
  typedef struct clist clist;

  clist* MakeNode(int);
  void Printlist(clist*);
  clist* InsertAfter(clist*,int,clist*);
  void InsertBefore(clist*,int,clist*);

  void main()
 {
  clist *last,*nn;
  int imp,sval,val,tmp,ch;
  clrscr();
  last=NULL;
   while(1)
  {
   cout<<"Enter no.[0 to stop]: ";
   cin>>tmp;

   if(tmp==0)
     break;
   nn=MakeNode(tmp);

   if(!last)
     last=nn;
   else
     nn->next=last->next;
     last->next=nn;
     last=nn;
  }
   cout<<"Enter the value of node selected: ";
   cin>>sval;
   cout<<"Enter the value to be inserted: ";
   cin>>val;
   cout<<"Enter the choice for insertion: ";
   cout<<"insert after -1\n";
   cout<<"insert before- 2 \n";
   cin>>ch;
   switch(ch)
  {
   case 1: last=InsertAfter(last,sval,nn); break;
   case 2: InsertBefore(last,sval,nn); break;
   default: cout<<"Invalid choice.";
  }
  Printlist(last);
  getch();
 }

   clist* MakeNode(int tmp)
  {
    clist *nn;
    nn=(clist*)malloc(sizeof(clist));
    nn->val=tmp;
    nn->next=NULL;
    return nn;
  }

  void Printlist(clist *last)
 {
   clist *ptr;
  if(last)
  {
   ptr=last->next;
   cout<<"The list is";
     do
    {
     cout<<"->"<<ptr->val;
     ptr=ptr->next;
    }
     while(ptr!=last->next);
  }
 }

  clist* InsertAfter(clist *last,int sval,clist *nn)
 {
   clist *ptr;
    if(last)
    {
      ptr=last->next;
       do
      {
       if(ptr->val==sval)
	 break;
       ptr=ptr->next;
      }
      while(ptr!=last->next);
       if(ptr->val==sval)
       {
	nn->next=ptr->next;
	ptr->next=nn;
	 if(ptr==last)
	  last=nn;
       }}
       return last;


    }

    void InsertBefore(clist *last,int sval,clist *nn)
   {
     clist *ptr,*prev,*next;
     if(last)
     {
      prev=last;
      ptr=last->next;
      do
      {
       if(ptr->val==sval)
	 break;
       prev=ptr;
       ptr=ptr->next;
      }
      while(ptr!=last->next);
      if(ptr->val==sval)
      {
       nn->next=ptr;
       prev=next=nn;
      }
     }
   }
