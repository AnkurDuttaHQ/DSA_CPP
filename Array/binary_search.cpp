#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int key){
    int st=0,end =n-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main (){
    
    int arr[] = {3,5,5,8,9,12};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the key to search:"<<endl;
    cin>>key;
    int ans = binary_search(arr,n,key);
    if(ans==-1){
        cout<<"Key not found"<<endl;
    }
    else{
        cout<<"Key found at index:"<<ans<<endl;
    }
}