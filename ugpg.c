#include<iostream> 
#include<string> 
using namespace std; 
class student 
{ 
        public: 
                string name,id; 
                int age; 
        void get_PU() 
        {       cout<<"Student PU info \n\n"; 
                cout<<"NAME ID AGE :\n"; 
                cin>>name; 
                cin>>id; 
                cin>>age; 
        } 
        void print_PU() 
        {       cout<<"Student PU info: \n"; 
                cout<<"Name :"<<name<<"\n"<<"ID :"<<id<<"\n"<<"Age:"<<age<<"\n"; 
        } 
}; 
 
class UG : public student 
{ 
        public: 
                int sem,fees,stipend; 
                 static int Age[8];               
                 static int count[8];             
 
                void get_UG() 
                {       get_PU(); 
                        cout<<"UG info \n"; 
                        cout<<"Enter the student SEM FEES STIPEND\n"; 
                        cin>>sem>>fees>>stipend; 
                        cout<<"\n"; 
                        Age[sem-1]+=AGE(); 
                        count[sem-1]++; 
                } 
                void print_UG() 
                { 
                        print_PU(); 
                         cout<<"Student UG info: \n"; 
                         cout<<"SEMESTER :"<<sem<<"\n"<<"Fees:"<<fees<<"\n"<<"STIPEND"<<stipend<<"\n"; 
                } 
                          int  Sem() 
                        { 
                                return sem; 
                        } 
                        int AGE() 
                        { 
                                return age; 
                        } 
 
}; 
int UG::Age[8]={0};      
int UG::count[8]={0}; 
class PG : public student 
{ 
        public: 
                int sem, fees,stipend; 
                 static int Age[8];   
                static int count[8]; 
                void get_PG() 
                {                 get_PU(); 
                                  cout<<"PG info \n"; 
                                  cout<<"Enter SEM FEES STIPEND\n"; 
                                  cin>>sem>>fees>>stipend; 
                                  cout<<"\n"; 
                                  Age[sem-1]+=AGE();        
                                  count[sem-1]++;                
 
                } 
                void print_PG() 
                {               print_PU(); 
                                 cout<<"Student PG info: \n"; 
                                 cout<<"SEM "<<sem<<"\t"<<"FEES "<<fees<<"\t"<<"STIPEND "<<stipend<<"\t \n"; 
                } 
                          int  Sem() 
                        { 
                                return sem; 
                        } 
                        int AGE() 
                        { 
                                return age; 
                        } 
 
}; 
int PG::Age[8]={0}; 
int PG::count[8]={0};  //Initialize Static Members 
  int main() 
{ 
        UG a[10]; 
        PG b[10]; 
        int i,m,n; 
        cout<<"Enter no. of UG std \n";cin>>m; 
        cout<<"Enter no.of PG std \n";cin>>n; 
        for(i=0;i<m;i++) 
        {       cout<<"UG :"<<i+1<<endl; 
                a[i].get_UG(); 
        } 
 
        if(m !=0)                        
        { 
                cout<<"UG student Details :\n"; 
                for(i=0;i<8;i++)                 
                { 
                        if(a[0].UG::count[i] !=0)        
for that SEM is 0 
                                cout<<"Sem : "<<i+1<<"\t"<<" Age Avg :"<<"\t"<<a[0].UG::Age[i]/a[0].UG::count[i]<<endl; 
                }                        
                for(i=0;i<n;i++) 
                {       cout<<"PG:"<<i+1<<endl; 
                        b[i].get_PG(); 
                } 
        } 
        cout<<"\n\n"; 
        if(n != 0) 
        { 
                cout<<"PG details \n"; 
                for(i=0;i<8;i++) 
                { 
                          if(b[0].PG::count[i] !=0) 
                            cout<<"Sem : "<<i+1<<" Age Avg :"<<"\t"<<b[0].PG::Age[i]/b[0].PG::count[i]<<endl; 
                }} 
return 0;  
} 
