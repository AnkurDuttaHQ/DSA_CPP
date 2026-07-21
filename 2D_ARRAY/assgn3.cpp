// Transpose of a marix
#include<iostream>
using namespace std;

void transpose_matrix(int(*mat)[3],int n , int m){
    int transpose[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            transpose[j][i] = mat[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<transpose[i][j];
        }
        cout<<endl;
    }   
}
int main(){
    int arr[2][3] = {{1,2,3},{4,5,6}};
    cout<<"original Matrix"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    } 
    transpose_matrix(arr,2,3);
}
