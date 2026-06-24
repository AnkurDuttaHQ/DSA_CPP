#include<iostream>
#include<cmath>
using namespace std;

int main (){
    int sum = 0,n,powerofTwo =0;

    cout<<"Enter the binary number: ";
    cin>>n;

    while(n>0){
        int digit = n%10;
        sum = sum + pow(2,powerofTwo)*digit;
        n/=10;
        powerofTwo++;
    }

    cout<<"The Decimal value is :"<<sum<<endl;
}