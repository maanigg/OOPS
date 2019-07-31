#include<iostream>
#include<fstream>
using namespace std;
class student
{
int rollno;
char name[10];
int marks;
char grade;
public:
void getdata()
{
cin>>rollno;
cin>>name;
cin>>marks;
if(marks>50)
grade='A';
else
grade='B';
}
void putdata()
{
cout<<name<<'\t'<<rollno<<'\t'<<marks<<'\t'<<grade<<'\n';
}
};
int main()
{
int i;
student s[10],s1[10];
ofstream outfile;
outfile.open("file.bin",ios::binary);
for(i=0;i<3;i++)
{
s[i].getdata();
outfile.write((char*)&s,sizeof(s));
}
outfile.close();
ifstream infile;
infile.open("file.bin",ios::binary);
for(i=0;i<3;i++)
{
infile.read((char*)&s1,sizeof(s1));
s1[i].putdata();
}
infile.close();
return 0;
}
