#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
class date
{long int dt;
public:
void  getdate();
void  put();
};
void date::getdate()
{char d[3],m[3],y[5];
cout<<"enter the date in format dd/mm/yyyy:";
cin.getline(d,3,'/');
cin.ignore(1,'/');
cin.getline(m,3,'/');
cin.ignore(1,'/');
cin.getline(y,5,'/');

int d1,m1;
long int y1;
d1=atoi(d);
m1=atoi(m);
y1=atol(y);
dt=d1|(m1<<5)|(y1<<9);
}
void date::put()
{int d,m,y;
d=dt&0x0000001f;
m=(dt&0x000001e0)>>5;
y=(int)(dt>>9);
cout<<d<<"/"<<m<<"/"<<y<<"\n";
}
void main()
{date a;
clrscr();
a.getdate();
a.put();
getch();
}


