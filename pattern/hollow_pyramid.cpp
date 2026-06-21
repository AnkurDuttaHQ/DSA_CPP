#include<iostream>
using namespace std;

int main (){
    int n=5;
    for (int i=1;i<=n;i++){
        cout<<"*";
        if(i==1||i==n){
            for(int j=1;j<=3;j++){
                cout<<"*";
            }
        }else{
            for(int j=1;j<=3;j++){
                cout<<" ";
            }
        }
        cout<<"*";
        cout<<endl;

    }
   
}
