#include<iostream>
using namespace std;
// print all the occurance of the 7
int count7(int (*arr)[3], int n, int m){
    int countof7 = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 7){
                countof7++;
            }
        }
    }

    return countof7;
}
int main(){
    int arr[2][3] = {{4,7,8}, {8,8,7}};
    int count = count7(arr, 2, 3);

    if(!count){
        cout<<"element not found"<<endl;

    } else{
        cout<<"elements frequency is "<<count<<" "<<"times";
    }

}