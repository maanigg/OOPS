#include<iostream>
using namespace std;
class media
{
string title;
int price;
public:
media(string p,int q)
{
title=p;
price=q;
cout<<"tistle is"<<title<<"price is"<<price;
}
virtual void getdata1()=0;
};
class pages:public media
{
int n;
public:
pages(string p,int q):media(p,q){getdata1();}
void getdata1()
{
cout<<"no.of pages in a book";
cin>>n;
cout<<"the no.of pages is:"<<n;
}
};
class playtime:public media
{
int t;
public:
playtime(string p,int q):media(p,q){getdata1();}
void getdata1()
{
cout<<"enter the play time";
cin>>t;
cout<<"the play time is:"<<t;
}
};
int main()
{
string title;
int price;
cout<<"enter book title";
cin>>title;
cout<<"enter book price";
cin>>price;
pages p1(title,price);
cout<<"enter tape title";
cin>>title;
cout<<"enter tape price";
cin>>price;
playtime p2(title,price);
p1.getdata1();
p2.getdata1();
}
