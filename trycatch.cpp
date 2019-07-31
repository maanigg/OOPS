#include<iostream>
using namespace std;
int main()
{
try
{
try
{
throw "A char exception";
}
catch(const char *e)
{
cout<<"exception in inner block"<<endl;
cout<<"rethrowing the exception"<<endl;
throw;
}
}
catch(const char *e)
{
cout<<"exception in outer block"<<endl;
}
return 0;
}
