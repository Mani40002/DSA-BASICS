
#include<iostream>
using namespace std;
void commonElementInThreeSortedArray(int arr1[], int arr2[], int arr3[],int n1, int n2, int n3){
    int i=0, j=0, k=0;
    while(i<n1 && j<n2 && k<n3 ){
        if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
            
            cout<<arr1[i]<<" ";
            i++; j++; k++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
       else if(arr1[i]<arr2[j]){
            i++;
            
        }
        else{
            k++;
        }

    }
}
int main(){
    int arr1[]={1,2,3,4,6};
    int arr2[]={2,4,6,8,9};
    int arr3[]={1,2,4,6,8};
    int n1=5,n2=5,n3=5;
commonElementInThreeSortedArray(arr1,arr2,arr3,n1,n2,n3);
}