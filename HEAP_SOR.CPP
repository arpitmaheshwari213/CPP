#include<iostream.h>
#include<conio.h>
void heap_sort(int[],int);
void create_heap(int[],int);
void display(int[],int);

void create_heap(int list[],int n)
{int k,j,i,temp;
for(k=2;k<=n;++k)
 {i=k;
 temp=list[k];
 j=i/2;
 while((i>1)&&(temp>list[j]))
     {list[i]=list[j];
     i=j;
     j=i/2;
     if(j<1)
     j=1;
     }
     list[i]=temp;
 }
}


   void heap_sort(int list[],int n)
   {int k,temp,value,j,i,p;

    for(k=n;k>=2;--k)
    { temp=list[1];
    list[1]=list[k];
    list[k]=temp;

    i=1;
    value=list[1];
    j=2;
    if((j+1)<k)
    if(list[j+1]>list[j])
    j++;
    while((j<=(k-1))&&(list[j]>value))
    {list[i]=list[j];
    i=j;
    j=2*i;
    if((j+1)<k)
      if(list[j+1]>list[j])
      j++;
      else
      if(j>n)
      j=n;
      list[i]=value;
      }

   }
  }
		 void display (int list[],int n)
		 {int i;
		 for(i=1;i<=n;i++)
		  cout<<list[i]<<"\n";
		 }


void main()
{int list[20],i,n;
clrscr();
cout<<"enter no of elements in the list\n";
cin>>n;
cout<<"enter the elements in the list\n";
for(i=1;i<=n;i++)
cin>>list[i];
cout<<"entered list is\n";
display(list,n);
create_heap(list,n);
cout<<"heap is\n";
display(list,n);
cout<<"\n";
heap_sort(list,n);
cout<<"the list is as follows\n";
display(list,n);
getch();
}