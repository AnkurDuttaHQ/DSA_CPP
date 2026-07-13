#include<iostream>
using namespace std;

void print_arr(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// reverse the array with extra space
int reverse_arr(int arr[],int n){
    int copyArr[n];
    for (int i=0;i<n;i++){
        copyArr[i] = arr[n-1-i];
    }
    for (int i=0;i<n;i++){
        arr[i] = copyArr[i];
    }
    print_arr(arr,n);
}

int main(){
    
    int arr[] = {3,5,5,8,9,9};
    int n = sizeof(arr)/sizeof(int);
    cout<<"Original array is:"<<endl;
    print_arr(arr,n);
    reverse_arr(arr,n);
}