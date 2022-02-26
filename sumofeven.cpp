#include<iostream>
using namespace std;
int main ()
{
    int num,i=1,sum=0;
    cin>>num;

    while (i<=num)
    {
        if (i%2 == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    cout<<sum;
    return 0;
}