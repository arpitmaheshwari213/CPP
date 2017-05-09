#include<stdio.h>
#include<conio.h>
void main()
{long int N,K;
long int i,j,sum=0,min=100000,m,max=0,b;
// scanf("%li %li"&N,&K);
 long int a[5];
clrscr();
 for(i=0;i<5;i++)
 {
   scanf("%li",&a[i]);
   sum=sum+a[i];
   if(max<a[i])
   max=a[i];
   if(min>a[i])
   min=a[i];
   }
   m=max;
  for(i=0;i<4;i++)
  {if(i==0)
   printf("%li",sum);
   else
   {
    if(sum>m)
     {j=0;
     b=a[j];
     for(j=0;j<5;j++)
     {if(b>min&&b>a[j])
      b=a[j];
      }
      sum=sum-b;
      printf(" %li",sum);
      min=b;
    }
    else
     {for(j=0;j<5;j++)
     {if(b<a[j]&&max>=b)
      b=a[j];
      }
      printf(" %li",b);
      max=b;
   }
  }
  }
  getch();
 }