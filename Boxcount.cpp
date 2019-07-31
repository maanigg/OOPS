#include<iostream>
using namespace std;
class box
{
private:int l,b,h;
static int count;
public:
box()
{
l=1;
b=2;
h=3;
}
static int getcount()
{
count++;
cout<<"no.of objects created:"<<count;
}
int cal()
{
return (l*b*h);
}
};
int box::count;
int main()
{
box b1;
box::getcount();
b1.cal();
box b2;
box::getcount();
b2.cal();
return 0;
}
