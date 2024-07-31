#include<iostream.h>
#include<conio.h>
class M
{
protected:
int m;
public:
void get_m(int a)
{
m=a;
}
};
class N
{
protected:
int n;
public:
void get_n(int b)
{
n=b;
}
};
class P:public M, public N
{
public:
void display(void)
{
cout<<"\n m="<<m;
cout<<"\n n="<<n;
cout<<"\n m*n="<<m*n;
}
};
void main()
{
clrscr();
P pobj;
pobj.get_m(15);
pobj.get_n(24);
pobj.display();
getch();
}