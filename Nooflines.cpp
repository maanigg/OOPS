#include<iostream>
#include<fstream>
using namespace std;
int main()
{
int c=0;
char ch;
ifstream infile;
infile.open("fourth.txt");
while(!infile.eof())
{
infile.get(ch);
if(ch=='\n')
c++;
}
infile.close();
cout<<"no.of lines in the file is"<<c-1;
}
