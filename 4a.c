#include<iostream> 
using namespace std; 
template<class t>              
void bubble(t a[30],int n)      
{ 
        int i,j; 
        t temp;                
        for(i=0;i<n-1;i++) 
                for(j=0;j<n-i-1;j++) 
        { 
                if(a[j]>a[j+1]) 
                { 
                        temp=a[j]; 
                        a[j]=a[j+1]; 
                        a[j+1]=temp; 
                } 
        }//End of sorting 
        cout<<"The sorted array is"<<endl;   
        for(i=0;i<n;i++) 
                cout<<a[i]<<" "; 
        cout<<endl; 
} 
main() 
{ 
        int i,m,n,p; 
        int a[30]; 
        char b[30]; 
        float c[30]; 
        cout<<"Enter the number of integer elements in array"<<endl; 
        cin>> n; 
        cout<<"Enter the integer elements"<<endl;       
        for(i=0;i<n;i++) 
                cin>>a[i]; 
        bubble(a,n);            //Bubble sort for integer data type 
        cout<<"Enter the number of char elements in array"<<endl; 
        cin>>m; 
        cout<<"Enter the char elements"<<endl;          
                for(i=0;i<m;i++) 
                        cin>>b[i]; 
        bubble(b,m);            //Bubble sort for char data type 
        cout<<"Enter the number of floating type elements in array"<<endl; 
        cin>>p; 
        cout<<"Enter the floating type elements"<<endl; 
                for(i=0;i<p;i++) 
                cin>>c[i]; 
        bubble(c,p);        
        }  
