#include "iostream"
using namespace std;
void intersectionof(int arr1[], int n1, int arr2[], int n2)
{
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {

            i++;
        }
        if (arr1[i] > arr2[j])
        {

            j++;
        }
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
}
int main()
{
    int arr1[] = {1, 3, 4, 5, 7, 9, 10};
    int arr2[] = {1, 3, 5, 7, 9, 10, 11};
    int n1 = 7, n2 = 7;
    intersectionof(arr1, n1, arr2, n2);
}