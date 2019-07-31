#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ifstream infile;
ofstream outfile;
infile.open("f1.txt");
char c;
outfile.open("f3.txt",ios::app);
while(!infile.eof())
{
infile.read(&c,sizeof(c));
outfile.write(&c,sizeof(c));
}
outfile.close();
return 0;
}
