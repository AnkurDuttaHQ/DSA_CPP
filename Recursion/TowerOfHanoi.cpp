// Binary Search using Recursion

#include<iostream>
using namespace std;

int binarySearch(int arr [7] , int st , int end , int key){

    if(st > end){
        return -1;
    }

    int mid = st + (end - st)/2;

    if(arr[mid] == key){
        return mid;
    } 
    else if(arr[mid] > key){
        binarySearch(arr, st, mid-1 , key);
    } else{
        binarySearch(arr,mid+1, end , key);
    }
}

int main (){
    int arr [] = {1,2,3,4,5,6,7};
    int target = 5;
    int value = binarySearch(arr,0,6,target);
    cout << value << endl;
}