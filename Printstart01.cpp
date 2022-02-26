#include<iostream>
using namespace std;

void Draw(int n)
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main ()
{
    int n=5;
    Draw(n);
}