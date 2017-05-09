#include<iostream.h>
#include<conio.h>     //create rational no. and print as 4/10 and 4/10*2=4/5
		      //sum of two rational no.
class rational{      //use hcf
private: int n,d;
	 int HCF(int ,int);
public: void get();
	void set(int,int);
	 void put();

rational operator*(rational);
rational operator+(rational);
};

void rational::get()
{cout<< "enter numerator and denominator";
 cin>>n;
 cin>>d ;
 }
 void rational::set(int i,int j)
 {n=i;
 d=j;
 }
 void rational::put()
 {cout<<"\nnumber is=";
  cout<<n<<"/"<<d;
  }
 int rational::HCF(int a,int b)
 {int hcf,min,max;
  if(a>b)
   {min=b;max=a;}
  else
   {min=a;max=b;}

  for(int i=min;i>0;i--)
   {if(min%i==0&&max%i==0)
    {hcf=i;
    break;
    }
   }
  return hcf;
 }
 rational rational:: operator*(rational r)
  {rational temp;
   int min,max,hcf;
   temp.n=n*r.n;
   temp.d=d*r.d;
   hcf=HCF(temp.n,temp.d);
   temp.n=temp.n/hcf;
   temp.d=temp.d/hcf;
   return(temp);
 }
 rational rational::operator+(rational r)
 {  rational temp;
    int hcf;
    temp.n=n*r.d+d*r.n;
    temp.d=d*r.d;
    hcf=HCF(temp.n,temp.d);
    temp.n=temp.n/hcf;
    temp.d=temp.d/hcf;
    return(temp);
 }

 void main()
 {rational a,b,d;
 clrscr();
 a.get();
 b.set(3,5);
 a.put();
 b.put();
 d=a*b;
 d.put();
 b=a+d;
 b.put();
 getch();
 }
