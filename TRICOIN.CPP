#include<stdio.h>
#include<conio.h>
void main(){
int i,j;

long int n[2];
clrscr();
for( i=0;i<2;i++)
{scanf("%li",&n[i]);
}
for( i=0;i<2;i++)
 {j=1;
  while(n[i]>0)
  {n[i]=n[i]-j;
  printf("arpit");
   j++;
  }
  printf("%d\n",j-1);
 }
 getch();
}