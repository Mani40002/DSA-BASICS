#include "iostream"
using namespace std;
void kadaneAlgorithm(int arr[], int n)
{
    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (maxi < sum)
        {
            maxi = max(sum, maxi);
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << "maxi:" << maxi << endl;
}
int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = 8;
    kadaneAlgorithm(arr, n);
}