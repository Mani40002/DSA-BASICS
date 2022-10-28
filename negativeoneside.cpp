#include <iostream>
using namespace std;
void negativeoneside(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
int main()
{
    int arr[] = {1, -3, 5, -5, 0, 9, 3, -7};
    int n = sizeof(arr) / sizeof(arr[0]);
    negativeoneside(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}