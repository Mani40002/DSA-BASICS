#include "iostream"
using namespace std;
void pairsum(int arr[], int n, int tar)
{
    int i = 0, j = n - 1;
    sort(arr, arr + n);
    while (i < j)
    {
        if (arr[i] + arr[j] == tar)
        {
            cout << arr[i] << " " << arr[j] << endl;
            i++;
            j++;
        }
        if (arr[i] + arr[j] < tar)
        {
            i++;
        }
        if (arr[i] + arr[j] > tar)
        {
            j--;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;
    int tar = 9;

    pairsum(arr, n, tar);
}