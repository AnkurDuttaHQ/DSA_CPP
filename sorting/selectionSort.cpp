#include<iostream>
using namespace std;

void printArray(int *arr, int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionsort(int *arr,int n){
    for (int i=0;i<n-1;i++){
        int min_idx=i; // initialize the index of the minimum element
        for (int j=i+1;j,n;j++){
            if (arr[j]<arr[min_idx]){
                min_idx=j;
            }
        
        }
        swap(arr[i],arr[min_idx]);
    }

    // print the sorted array
    printArray(arr,n);
}

int main (){
    int arr[5]={5,4,3,2,1};
    int n=5;
    selectionsort(arr,n);
    
}