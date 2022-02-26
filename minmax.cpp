#include <iostream>
#include <algorithm>
using namespace std;

int maxMin(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {

        sum = sum + arr[i];
    }
    cout << sum << " ";
    sum =0;
    for (int i = 1; i <n; i++)

    {
        
        sum = sum + arr[i];
    }
    cout << sum;
    return sum;
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
    sort(arr, arr + n);
    maxMin(arr, n);

    return 0;
}
