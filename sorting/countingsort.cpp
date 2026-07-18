#include<iostream>
using namespace std;

void printArray(int *arr, int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void countingsort(int *arr,int n){
    int max=arr[0];
    for (int i=1;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }

    int *count=new int[max+1]{0}; // create a count array and initialize it to 0
    for (int i=0;i<n;i++){
        count[arr[i]]++; // count the occurrences of each element
    }

    int index=0;
    for (int i=0;i<=max;i++){
        while (count[i]--){
            arr[index++]=i; // place the elements back into the original array in sorted order
        }
    }

    // print the sorted array
    printArray(arr,n);
}

int main (){
    int arr[5]={5,4,3,2,1};
    int n=5;
    countingsort(arr,n);
    
}