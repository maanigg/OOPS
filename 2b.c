#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char ch;
ifstream infile;
int c=0;
infile.open("second1.txt");
while(!infile.eof())
{
infile.get(ch);
++c;
}
infile.close();
cout<<"the file has"<<c<<"bytes of size";
return 0;
}
