#include "iostream"
using namespace std;
int main()
{

    int n = 12;
    int arr[100] = {1, 1};

    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 2] + arr[i - 1];
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}