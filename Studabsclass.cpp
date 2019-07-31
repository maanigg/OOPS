#include<iostream>
using namespace std;
class student
{
public:
virtual void getdata()=0;
virtual void display()=0;
};
class engineering:public student
{
char name[10];
int rollno;
public:
void getdata()
{
cout<<"engineering";
cout<<"enter the name";
cin>>name;
cout<<"enter roll no";
cin>>rollno;
}
void display()
{
cout<<"name is:"<<name;
cout<<"roll no is:"<<rollno;
}
};
class medicine:public student
{
char name[10];
int rollno;
public:
void getdata()
{
cout<<"medicine";
cout<<"enter the name";
cin>>name;
cout<<"enter roll no";
cin>>rollno;
}
void display()
{
cout<<"name is:"<<name;
cout<<"roll no is:"<<rollno;
}
};
class science:public student
{
char name[10];
int rollno;
public:
void getdata()
{
cout<<"science";
cout<<"enter the name";
cin>>name;
cout<<"enter roll no";
cin>>rollno;
}
void display()
{
cout<<"name is:"<<name;
cout<<"roll no is:"<<rollno;
}
};
int main()
{
student *p[3];
engineering e;
medicine m;
science s;
p[0]=&e;
p[0]->getdata();
p[0]->display();
p[1]=&m;
p[1]->getdata();
p[1]->display();
p[2]=&s;
p[2]->getdata();
p[2]->display();
return 0;
}
