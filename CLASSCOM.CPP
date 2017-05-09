#include<stdio.h>
#include<conio.h>
#include<math.h>
class complex1
{private:
int r,i;
public :
 complex1();
void get (void);
void set (int,int);
float modulus(void);
void put(void);
complex1 operator -(complex1);
complex1 operator +(complex1);
};
void complex1::complex1()
{r=0;
i=0;
}
void complex1::get (void)
{printf("enter the complex no.");
scanf("%d ",&r);
scanf("%d",&i);
}
void complex1::set (int p,int q)
{r=p;i=q;
}
float complex1::modulus(void )
{float  m;

m=sqrt((r*r)+(i*i));


return m;
}
complex1 complex1 ::operator+(complex1 x)
{
complex1 temp;
temp.r=r+x.r;
temp.i=i+x.i;
return temp;
}
complex1 complex1 ::operator-(complex1 x)
{complex1 temp;
temp.r=r-x.r;
temp.i=i-x.i;
return temp;
}
void complex1::put(void)
{printf("complex=%d+%d.i\n",r,i);
}
void main()
{float n;
clrscr();
complex1 a,b,c,d;
a.get();
b.set(2,3);
c=a.operator+(b);
n=b.modulus();
printf("%f\n",n);
a.put();
b.put();
d=a.operator-(b);
c.put();
d.put();
getch();
}



