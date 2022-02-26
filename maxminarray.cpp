#include <iostream>
#include <climits>
using namespace std;

int getMax(int num[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
return max;
}

int getMin(int num[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
return min;
}
int main ()
{
    int n;
    cin>>n;
    
    int num[100];

    for (int i=0; i<n; i++)
    {
    cin>>num[i];
    }
    cout<<"the maximum array is "<<getMax(num, n)<<endl;
    cout<<"the minimum array is "<<getMin(num, n)<<endl;
    return 0;

}

