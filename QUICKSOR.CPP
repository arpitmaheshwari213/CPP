#include<iosrteam.h>
#include<conio.h>
int a[100],n,i,start,end,temp;
void quick(int[],int,int);
void output(int[],int);
void main ()
{clrscr();
cout<<"enter the no. of elements to be sorted (<100):";
cin>>n;
cout<<"enter "<<n<<"elements:";
for (i=0;i<n;i++)
cin>>a[i];
quick(a,0,n-1);
output(a,n);
getch();
}
void quick(int a[],int start,int end)
{
if(start<end)
 {int up=start;
 int down=end ;
 int pv=a[start];
 while(up<=down)
 {while(pv>=a[up]&&up<=end)
 up++;
 while(pv<a[down])
 down--;
 if(up<down)
 {
 temp=a[down];
 a[down]=a[up];
 a[up]=temp;
 }
 }
 temp=a[down];
 a[down]=a[start];
 a[start]=temp;
 quick(a,start,down-1);
 quick(a,down+1,end);
 }
 }
 void output(int a[],int n)
 {cout <<"sorted elements are;";
  for(i=0;i<n;i++)
  cout<<a[i]<<" ";
  }