#include<iostream> 
using namespace std; 
class emp 
{ 
private:int empno,basic,allowance,it,net,gross; 
        char name[25];                                     //variable declarations 
public: void input() 
        { 
        cout<<"Enter employee number"<<endl; 
        cin>>empno; 
        cout<<"Enter name"<<endl; 
        cin>>name; 
        cout<<"Enter basic salary"<<endl; 
        cin>>basic; 
        } 
        void compute() 
        { 
        allowance=basic*0.52;                  
        gross=basic+allowance; 
        it=0.3*gross; 
        net=gross-it; 
        } 
        void display() 
        { 
        cout<<"Name= "<<name<<endl; 
        cout<<"Basic salary= "<<basic<<endl; 
        cout<<"Allowance= "<<allowance<<endl; 
        cout<<"Gross salary= "<<gross<<endl; 
        cout<<"Income tax= "<<it<<endl; 
        cout<<"Net salary= "<<net<<endl; 
        } 
}; 
main() 
{ 
emp e[10];                 //array of objects 
int n,i; 
cout<<"Enter the no. of employess\n"; 
cin>>n; 
for(i=0;i<n;i++) 
{ 
cout<<"Enter details of employee "<<i+1<<endl; 
e[i].input(); 
e[i].compute(); 
} 
for(i=0;i<n;i++) 
{ 
cout<<"Details of employee "<<i+1<<endl; 
e[i].display(); 
} 
} 
