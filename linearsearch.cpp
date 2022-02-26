#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int searchNum(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return true;
    }
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
    int key;
    cin >> key;

    bool ans = searchNum(arr, n, key);

    if (ans)
    {
        cout << "Key is found" << endl;
    }
    else
    {
        cout << "key is not found" << endl;
    }

    cout << ans << endl;
    return 0;
}
