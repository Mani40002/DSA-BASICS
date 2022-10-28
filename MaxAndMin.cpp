#include <iostream>
using namespace std;
int maxi(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
int mini(int arr[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;
}

int main()
{
    int arr[] = {1, 4, -17, 9, 0, -3, -50};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "maxi : " << maxi(arr, n) << endl;
    cout << "mini : " << mini(arr, n) << endl;
}