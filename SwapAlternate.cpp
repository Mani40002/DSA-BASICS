#include <iostream>
using namespace std;
void swapalt(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}

int main()
{
    int arr[] = {1, 4, 7, 9, 0, -3, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    swapalt(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}