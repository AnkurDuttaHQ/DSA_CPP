#include<iostream>
using namespace std;

// search in sorted matrix using staircase approach

bool searchinmatrix(int arr[4][4],int n,int m,int key){
    int i=0,j=m-1;
    while(i<n && j>=0){
        if(arr[i][j]==key){
            cout<<"key found at index ("<< i <<","<<j << ")\n"<<endl;
            return true;
        } else if(arr[i][j]>key){
            j--; // we have to go to leftside
        } else{
            i++; // go to dowmwards
        }
    }

    cout << "key not found"<<endl;
    return false;
}

int func2(int(*mat)[4],int n ,int m){
    cout<<mat<<endl;
    cout<<*(mat)<<endl;
    cout<<*(*mat)<<endl;
    cout<<*(*(mat+1))<<endl;
}

int main(){
    int key;
    int arr[4][4]={{10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {32,33,39,50}};
    // cout<<"Enter the key for search"<<endl;
    // cin >> key ;
    // searchinmatrix(arr,4,4,key);
    func2(arr,4,4);
}

