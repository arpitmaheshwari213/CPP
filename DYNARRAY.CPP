#include<iostream.h>
#include<conio.h>
void main()
{ int size,i;
  clrscr();
cout<<"enter size";
cin>>size;
 int *arr=new int[size+1];
 for(i=0;i<=size;i++)
 { cout<<"enter";
  cin>>arr[i];
  }
 for(i=0;i<=size;i++)
 {cout<<arr[i];
 }
 delete[]arr;

  getch();
  }