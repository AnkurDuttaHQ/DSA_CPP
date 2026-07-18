// Use the following sorting algorithms to sortanarray in DESCENDING order:
// a.BubbleSort b.
//b.SelectionSort 
//c.InsertionSort 
//d.CountingSort

#include<iostream>
using namespace std;

void printArray(int *arr, int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubblesort(int *arr,int n){
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    // print the sorted array
    printArray(arr,n);
}

void selectionsort(int *arr,int n){
    for (int i=0;i<n-1;i++){
        int max_idx=i; // initialize the index of the maximum element
        for (int j=i+1;j<n;j++){
            if (arr[j]>arr[max_idx]){
                max_idx=j;
            }
        
        }
        swap(arr[i],arr[max_idx]);
    }

    // print the sorted array
    printArray(arr,n);
}

void insertiosort(int *arr,int n){
    for (int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]<key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    // print the sorted array
    printArray(arr,n);
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
    for (int i=max;i>=0;i--){
        while (count[i]--){
            arr[index++]=i; // place the elements back into the original array in sorted order
        }
    }

    // print the sorted array
    printArray(arr,n);
}

int main (){
    int arr[9]={3,6,2,1,8,7,4,5,3};
    int n=9;
    
    cout<<"Bubble Sort in Descending Order:"<<endl;
    bubblesort(arr,n);
    
    int arr2[9]={3,6,2,1,8,7,4,5,3};
    cout<<"Selection Sort in Descending Order:"<<endl;
    selectionsort(arr2,n);
    
    int arr3[9]={3,6,2,1,8,7,4,5,3};
    cout<<"Insertion Sort in Descending Order:"<<endl;
    insertiosort(arr3,n);
    
    int arr4[9]={3,6,2,1,8,7,4,5,3};
    cout<<"Counting Sort in Descending Order:"<<endl;
    countingsort(arr4,n);
    
}
