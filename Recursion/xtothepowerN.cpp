// calculate x^n using recusrsion
#include <iostream>
using namespace std;

int power(int x , int n){
    if(n==0){
        return 1;
    } 
    int halfpowersquare = power(x, n/2);
    if(n%2==0){
        return halfpowersquare * halfpowersquare;
    } else {
        return x * halfpowersquare * halfpowersquare;
    }
}

int main (){
    int x, n;
    cin >> x >> n;
    cout << power(x, n) << endl;
}