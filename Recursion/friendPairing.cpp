#include<iostream>
using namespace std;

int friendPair(int n){
    if(n==1 || n ==2 ){
        return n;
    }

    return friendPair(n-1) + (n-1)*friendPair(n-2);
}

int main (){
    cout << friendPair(4) << endl;
    return 0;
}