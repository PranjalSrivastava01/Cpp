#include<iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout<<"enter the numbers"<<endl;
    cin>>a>>b>>c;
    
    if(a>b && a>c)
    {
        cout<<a<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<b<<endl;
    }
    else 
    {
        cout<<c<<endl;
    }
    return 0;
}