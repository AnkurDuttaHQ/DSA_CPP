// Find the largest element in the array
#include<iostream>
using namespace std;

int main (){
    int arr[] = {3,5,5,8,9,9};
    int n = sizeof(arr)/sizeof(int);
    int max =0;
    for (int i=0;i<n;i++){
        if(arr[i]==max){
           continue;
        }else{
            max = arr[i];
        }
        
    }
    cout<<"Largest elemet is:"<<max<<endl;
}

