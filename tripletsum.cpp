#include "iostream"
using namespace std;
bool tripletsum(int arr[], int n, int tar)
{
    sort(arr, arr + n);
    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            if (arr[i] + arr[j] + arr[k] == tar)
            {
                return true;
            }
            if (arr[i] + arr[j] + arr[k] < tar)
            {
                j++;
            }
            if (arr[i] + arr[j] + arr[k] > tar)
            {
                k--;
            }
        }
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 2, 1};
    int n = 4;
    int tar = 3;

    cout << tripletsum(arr, n, tar) << endl;
}