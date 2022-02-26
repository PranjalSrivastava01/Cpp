#include<iostream>
#include<algorithm>
using namespace std;

int main ()
{
    int n=5;
    int arr[n]= {9,5,1,10,8};
    sort (arr, arr+n);
    for (int i=0; i<n; i++)
    {
    cout<<arr[i]<<endl;
    }
    return 0;
}