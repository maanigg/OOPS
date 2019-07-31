#include<iostream>
#include<iterator>
#include<map>
using namespace std;
int main()
{
map<int,int> m;
m.insert(pair<int,int>(1,40));
m.insert(pair<int,int>(2,80));
m.insert(pair<int,int>(3,50));
m.insert(pair<int,int>(4,45));
map<int,int>::iterator itr,t;
cout<<"the map is:\n";
cout<<"\t key \t element\n";
for(itr=m.begin();itr!=m.end();++itr)
{
cout<<'\t'<<itr->first<<'\t'<<itr->second<<'\n';
}
cout<<endl;
int num;
num=m.erase(4);
cout<<"m.erase(4):";
cout<<num<<"removed\n";
cout<<"\t key \t element\n";
for(itr=m.begin();itr!=m.end();++itr)
{
cout<<'\t'<<itr->first<<'\t'<<itr->second<<'\n';
}
cout<<endl;
t=m.find(3);
cout<<"element at 3rd index is:"<<'('<<t->first<<','<<t->second<<')'<<endl;
cout<<"size of map is:"<<m.size();
return 0;
}
