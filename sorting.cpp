#include<iostream>
#include<math.h>
using namespace std;

int sort(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (arr[j] > arr[j+1])
            swap(arr[j+1],arr[j]);
        }
    }
}

int main ()
{
    int arr[5] = {9,5,4,7,3};
    sort (arr,5);

    for (int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

// arr[j] = {9,5,4,7,3}
// arr[j+1] = {9,5,4,7,3}
// arr[0] = 9 , arr[1] = 5 
// arr[j] > arr[j+1]
