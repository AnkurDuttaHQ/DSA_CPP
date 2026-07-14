#include<iostream>
using namespace std;

void print_arr(int arr[],int n){
    for (int start=0;start<n;start++){
        cout<<"for "<<start<<" "<<"subarray will be"<<endl; // print the start index
        for(int end=start;end<=n-1;end++){
            for(int i=start;i<=end;i++){
                cout<<arr[i]<<" "; // print the subarray from start to end index
            }
            cout<<endl;
        }
        cout<<endl;
    }
}

int main (){
    int arr[5]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    print_arr(arr,n);
}