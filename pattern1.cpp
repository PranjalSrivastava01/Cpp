#include<iostream>
using namespace std;
int main ()
{
    int num,row=1;
    cin>>num;
    
    while (row<=num)
    {
        int col=1;
        int value = row;
        while(col<=row)
        {
            cout<<value;
            value = value + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
        
    }
    return 0;
}