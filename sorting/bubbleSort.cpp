#include<iostream>
using namespace std;

void bubblesort(int *arr , int n){
    for (int i=0;i<n-1;i++){
        cout<< i+1<< "th pass: ";
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        for (int k=0;k<n;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
 }


int main (){
    int arr[5]={5,4,3,2,1};
    int n=5;
    bubblesort(arr,n);
    
}