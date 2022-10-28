#include <iostream>
using namespace std;
void linearsearch(int arr[], int n, int tar)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == tar)
        {
            cout << i + 1 << endl;
        }
    }
}

int main()
{
    int arr[] = {1, 4, 7, 9, 0, -3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
    int tar;
    cin >> tar;
    cout << "ans: ";
    linearsearch(arr, n, tar);
}