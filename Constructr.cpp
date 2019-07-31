#include<iostream>
using namespace std;
class A
{
public:
A()
{
cout<<"consturctor of A is called";
}
~A()
{
cout<<"destructor of A is called";
}
};
class B:public A
{
public:
B()
{cout<<"consturctor of B is called";
}
~B()
{
cout<<"destructor of B is called";
}
};
class C:public B
{
public:
C()
{cout<<"consturctor of C is called";
}
~C()
{
cout<<"destructor of B is called";
}
};
class D:public A,public B
{
public:
D()
{cout<<"consturctor of D is called";
}
~D()
{
cout<<"destructor of D is called";
}
};
int main()
{
A A1;
B B1;
C C1;
D D1;
return 0;
}
