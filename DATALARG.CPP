#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
class large{
char n[101];                  //multiplication of large no.s
public:                      //use string to enter the data
void get();
void put();
large operator*(large);
large operator+(large);
};
void large::get(){
cout<<"enter  no."<<"\n";
cin>>n;
}
void large::put()
{cout<<"\n"<<n;
}
large large::operator*(large r)
{ int i,b,j,l1,l2,temp=0,a;
  large ans;

   l1=strlen(n);                    //find length of string
   l2=strlen(r.n);

  int* arr1=new int[l1];           // created dynamic array using  new
  int* arr2=new int[l2];
  int* arr=new int[l1+l2];

  for( i=0;i<l1;i++)                  //transfer data from string to array by type casting and also reversing it
  {arr1[i]=(int)n[l1-i-1]-48;
  }
   for( i=0;i<l2;i++)
  {arr2[i]=(int)r.n[l2-i-1]-48;
  }                                 //digits of ans can equal to sum of digits of both no.s or one less than this
				    /*value at (i+j)th index of ans can be calculated by adding all no.s of result of
				    from multiplication of nos. at ith and jth for all i and j such that i+j=b
				    and i<l1 and j<l2*/

  for(b=0;b<l1+l2-1;b++)            //note:b<l1+l2-1 is bcoz max value of i+j can be l1-1+l2-1=l1+l2-2 (index of array start from0)
  {
  for(i=0;i<=b&&i<l1;i++)

   {j=b-i;
   if(j<l2)
   temp=temp+arr1[i]*arr2[j];
   }
  a=temp%10;
  temp=temp/10;
  arr[b]=a;
 }
 while(temp!=0)
 {
 a=temp%10;                         //this loop is for placing remaining digits present in temp
 temp=temp/10;
 arr[b++]=a;
 }

j=0;
  for(i=b-1;i>=0;i--)                //convert array to string using type casting
  {ans.n[i]=(char)(arr[j]+48);
  j++;
  }

  ans.n[b]='\0';
  delete[]arr1;
  delete[]arr2;                 //delete memory of array
  delete[]arr;
  return ans;
  }

large large::operator+(large r)
{int temp=0,l1,l2,min,max,j;
large ans;

   l1=strlen(n);                    //find length of string
   l2=strlen(r.n);

  int* arr1=new int[l1];           // created dynamic array using  new
  int* arr2=new int[l2];
  int* arr=new int[l1+l2];

  for(int  i=0;i<l1;i++)                  //transfer data from string to array by type casting and also reversing it
  {arr1[i]=(int)n[l1-i-1]-48;
  }
   for( i=0;i<l2;i++)
  {arr2[i]=(int)r.n[l2-i-1]-48;
  }

 if(l2>l1)
 {min=l1-1;max=l2-1;}
 else
 {min=l2-1;max=l1-1;}
for( i=0;i<=min;i++)
{temp=temp+arr1[i]+arr2[i];
arr[i]=temp%10;
temp=temp/10;
}
for(i=min+1;i<=max;i++)
{ if(max==l1-1)
temp=temp+arr1[i];
else
temp=temp+arr2[i];
arr[i]=temp%10;
temp=temp/10;
}

if(temp!=0)
{arr[i]=temp%10;
}
 ans.n[i+1]='\0';
j=0;
  for(;i>=0;i--)                //convert array to string using type casting
  {ans.n[i]=(char)(arr[j]+48);
  j++;
  }


  delete[]arr1;
  delete[]arr2;                 //delete memory of array
  delete[]arr;
  return ans;
  }

void main()
{
large a,b,c;
clrscr();
a.get();
b.get();
c=a*b;
c.put();
getch();
}