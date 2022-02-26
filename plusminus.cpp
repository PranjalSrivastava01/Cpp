#include <bits/stdc++.h>
using namespace std;

int plusMinus(int arr[], int n)
{
    int pcount = 0;
    int ncount = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pcount++;
        }
        else if (arr[i] < 0)
        {
            ncount++;
        }
        else
        {
            count++;
        }
    }
   // cout << pcount << " " << ncount << " " << count;
    long double ans1= double(pcount)/ double(n);  
    long double ans2=double(ncount)/double(n);
    long double ans3=double(count)/double(n);

    cout <<ans1<<" "<<ans2<<" "<<ans3<< endl;
    return 0;
}
int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    plusMinus(arr, n);
    return 0;
}