#include<iostream.h>
#include<conio.h>
class Number{
 int a;
 public:
 void get();
 void put();
 void operator++();
 void operator--();
};
void Number ::get(){
	cout<<"\nenter the number";
	cin>>a;
}
void Number::put(){
	cout<<"\nvalue is";
	if(a<8&&a>-9)
	cout<<"\n"<<a;
	else if(a>=8)
	cout<<"\n+ì\n";
	else
	cout<<"\n-ì\n";
	}
		void Number ::operator++(){
		if(a>=7)
		a=8;
		else if(a<7&&a>-9)
		a++;
		else
		a=-9;
		}

void Number ::operator--(){
if(a<=-8)
a=-9;
else if(a<8&&a>-8)
a--;
else
a=8;
}
void main()
{Number n,p;
clrscr();
n.get();
n.put();
++n;
cout<<"\nafter ++ ";

n.put();
p.get();
p.put();
cout<<"\nafter --";
--p;
p.put();
getch();
}


