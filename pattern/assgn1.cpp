#include<iostream>
using namespace std;

int main (){
    int num=1;
    for (int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num = 1 - num; // Toggle between 1 and 0
        }
        cout<<endl;
    }
}