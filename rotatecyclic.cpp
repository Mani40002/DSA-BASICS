#include"iostream"
using namespace std;
void rotatecyc(int arr[], int n){
    int temp=arr[n-1];
    for(int i=n-1; i>0; i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(int i=0; i<n; i++)cout<<arr[i]<<" ";
}

int main(){
    int arr[]={1,3,4,5,7,9,10,13};
    
    int n=8;
    rotatecyc(arr,n);
    
}