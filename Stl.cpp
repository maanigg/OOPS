#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
vector<int> g1;
vector<int>::iterator j;
for(int i=0;i<=5;i++)
g1.push_back(i);
cout<<"ouput of begin and end :";
for(j=g1.begin();j!=g1.end();++j)
cout<<*j<<" ";
cout<<"deleted last element\n";
g1.erase(g1.end()-1);
cout<<"ouput of begin and end :";
for(j=g1.begin();j!=g1.end();++j)
cout<<*j<<" ";
cout<<"size of vector is:"<<g1.size()<<endl;
g1.clear();
if(g1.empty())
cout<<"cleared all";
else
cout<<"not cleared";
return 0;
}
