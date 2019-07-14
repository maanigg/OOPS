#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
class stack
{
private:
int *s;
int max;
int top;
public:
class FULL{};
class EMPTY{};
void push(int);
stack(int);
int pop();
void display();
};
stack::stack(int m)
{
s=new int[m];
max=m;
top=-1;
}
void stack::push(int item)
{
if(top>max-1)
throw FULL();
else
s[++top]=item;
}
int stack::pop()
{
if(top==-1)
throw EMPTY();
else
return s[top--];
}
void stack::display()
{
if(top==-1)
throw EMPTY();
else
for(int i=top;i>=0;i--)
cout<<s[i]<<"\n";
}
int main()
{
int item,size,ch=1;
cout<<"enter size";
cin>>size;
stack s1(size);
cout<<"stack with exception handling";
cout<<"1.push\n 2.pop\n 3.display\n 4.exit\n";
while(1)
{
cout<<"enter your choice";
cin>>ch;
switch(ch)
{
case 1:cout<<"enter item to be pushed";
cin>>item;
try
{
s1.push(item);
}
catch(stack::FULL)
{
cout<<"stack overflow";
}
break;
case 2:
try
{
s1.pop();
}
catch(stack::EMPTY)
{
cout<<"stack underflow";
}
break;
case 3:
try
{
s1.display();
}
catch(stack::EMPTY)
{
cout<<"stack underflow";
}
break;
case 4:exit(0);
}
}
return 0;
}
