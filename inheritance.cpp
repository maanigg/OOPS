#include<iostream>
#include<string>
using namespace std;
class person
{
string name;
public:
void setname()
{
cout<<"enter name"<<endl;
cin>>name;
}
void getname()
{
cout<< name<<endl;
}
};
class teacher:public person
{
int pub;
public:
void setpub()
{
cout<<"enter pub"<<endl;
cin>>pub;
}
void getpub()
{
cout<<pub<<endl;
}
};
class student:public person
{
int m1,m2,m3;
public:
void setmarks()
{
cout<<"enter marks"<<endl;
cin>>m1>>m2>>m3;
}
float getsum()
{
float sum=(float)(m1+m2+m3);
return sum;
}
};
class marks:public student
{
float perc;
public:
void percent()
{
float sum=getsum();
perc=sum/3;
cout<<perc<<endl;
}
};
int main()
{
teacher t;
t.setname();
t.setpub();
t.getname();
t.getpub();
marks m;
m.setname();
m.setmarks();
m.getname();
m.percent();
}
