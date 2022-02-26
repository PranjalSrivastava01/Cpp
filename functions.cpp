#include <iostream>
using namespace std;

int greatestNum(int a,int b, int c, int d)
{

    cin>>a>>b>>c>>d; 

    if (a>=b && a>=c && a>=d)
    {
       cout<<a<<endl; 
    }
    else if (b>=a && b>=c && b>=d)
    cout<<b<<endl;
    return 0;
}    
    
