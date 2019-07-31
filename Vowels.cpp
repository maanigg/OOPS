#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char c;
int count[10]={0};
ofstream outfile;
ifstream infile;
infile.open("first.txt",ios::in);
outfile.open("vowelscount.txt",ios::out);
while(!infile.eof())
{
infile.get(c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
{
switch(c)
{
case 'a':count[0]++;break;
case 'e':count[1]++;break;
case 'i':count[2]++;break;
case 'o':count[3]++;break;
case 'u':count[4]++;break;
case 'A':count[5]++;break;
case 'E':count[6]++;break;
case 'I':count[7]++;break;
case 'O':count[8]++;break;
case 'U':count[9]++;break;
}
outfile<<c<<":"<<infile.tellg()<<"\n";
}
}
infile.close();
int i;
for(i=0;i<10;i++)
{
switch(i)
{
case 0:outfile<<"count of a"<<count[0]<<"\n";break;
case 1:outfile<<"count of e"<<count[1]<<"\n";break;
case 2:outfile<<"count of i"<<count[2]<<"\n";break;
case 3:outfile<<"count of o"<<count[3]<<"\n";break;
case 4:outfile<<"count of u"<<count[4]<<"\n";break;
case 5:outfile<<"count of A"<<count[5]<<"\n";break;
case 6:outfile<<"count of E"<<count[6]<<"\n";break;
case 7:outfile<<"count of I"<<count[7]<<"\n";break;
case 8:outfile<<"count of O"<<count[8]<<"\n";break;
case 9:outfile<<"count of U"<<count[9]<<"\n";break;
}
}
outfile.close();
return 0;
}
