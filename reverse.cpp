#include <iostream>
#include <math.h>
using namespace std;
void reversearr(int arr[], int n)
{
    //     int i=0;
    //     while(i<n){
    //         int temp= arr[i];
    //         arr[i]=arr[n-1];
    //         arr[n-1]=temp;
    // i++;
    // n--;
    //     }

    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int arr[] = {1, 4, 7, 9, 0, -3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "reverse array: ";
    reversearr(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}