#include<iostream>
using namespace std;

    //linear search
int lineaSearch(int arr[],int n,int key){
        for (int i=0;i<n;i++){
            if(arr[i]==key){
                return i;
            }
        }
        return -1;
    }

int main(){
    int arr[] = {3,5,5,8,9,9};
        int n = sizeof(arr)/sizeof(int);
        int key;
        cout<<"Enter the key to search:"<<endl;
        cin>>key;
        int index = lineaSearch(arr,n,key);
        if(index==-1){
            cout<<"Element not found"<<endl;
        }else{
            cout<<"Element found at index:"<<index<<endl;
        }
    }