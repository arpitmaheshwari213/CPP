#include<iostream.h>
#include<conio.h>
void main()
{  int i=256;
   int *p;
   char *c;
   p=&i;
   c=(char*)p;
   cout<<"First byte contains"<<(int)*c;
   c++;

   cout<<"Second byte contains"<<(int)*c;
   getch();

}