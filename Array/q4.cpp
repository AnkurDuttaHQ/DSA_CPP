#include<iostream>
using namespace std;

//revrse the array without extra space
void print_arr(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int reverse_arr(int arr[],int n){
    for (int i=0;i<n/2;i++){
        
        int st=i,end=n-i-1;
        int temp =arr[st];
        arr[st]=arr[end];
        arr[end ]=temp;
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