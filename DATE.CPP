#include<stdio.h>
#include<conio.h>
class date
{
private:
int d,m,y;
int  is_valid();
public:
void get (int ,int ,int );
void disp();
int is_leap();
void incr();
}
int date:: is_leap(void)
{ if(y%400==0)
{return(1) }
else
{if(y%4==0&&y/100!=0)
 return(1);
 else return(0);
 }
}

void date::disp(void)
{printf("%d/%d/%d",d,m,y);
}
int date ::is_valid(void)
{if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
if(d>31)
{return(0);

}
else if(m==2)
  {if(is_leap())
     {if(d>29)
     return(0);
     }
    else
     {if(d>28)
     return(0);
     }
   }

 else
 {if(d>30)
  return(0);
 }
 return(1);
 }
void date::get(int p, int q,int r);
{p=d;
q=m;
r=y;
if(is_valid()==0)
{printf("invalid date\n r-enter date");
get(d,m,y);
}

disp();
}

void date::incr(void)
{




