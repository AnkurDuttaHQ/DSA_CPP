// check if a array is sorted or not using recursion

#include <iostream>
using namespace std;

bool isSorted(int arr[], int n){
    if(n==1){
        return true;
    }
    if(arr[0] < arr[1]){
        return isSorted(arr+1, n-1);
    } else{
        return false;
    }
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    if(isSorted(arr, n)){
        cout << "The array is sorted." << endl;
    } else{
        cout << "The array is not sorted." << endl;
    }
    return 0;
}